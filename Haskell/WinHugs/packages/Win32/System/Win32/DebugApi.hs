{-# OPTIONS_GHC -optc-D__HUGS__ #-}
{-# OPTIONS_GHC -optc-DUNICODE #-}
{-# INCLUDE "windows.h" #-}
{-# LINE 1 "System\Win32\DebugApi.hsc" #-}
-----------------------------------------------------------------------------
{-# LINE 2 "System\Win32\DebugApi.hsc" #-}
-- |
-- Module      :  System.Win32.DebugApi
-- Copyright   :  (c) Esa Ilari Vuokko, 2006
-- License     :  BSD-style (see the file LICENSE)
--
-- Maintainer  :  Esa Ilari Vuokko <ei@vuokko.info>
-- Stability   :  provisional
-- Portability :  portable
--
-- A collection of FFI declarations for using Windows DebugApi.
--
-----------------------------------------------------------------------------
module System.Win32.DebugApi where

import Control.Exception( bracket_ )
import Data.Word        ( Word8, Word32 )
import Foreign          ( Ptr, nullPtr, ForeignPtr, mallocForeignPtrBytes
                        , peekByteOff, plusPtr, allocaBytes, castPtr, poke
                        , withForeignPtr, Storable, sizeOf, peek, pokeByteOff )
import System.IO        ( fixIO )
import System.Win32.Types   ( HANDLE, BOOL, WORD, DWORD, failIf_, failWith
                            , getLastError, failIf, LPTSTR, withTString )


{-# LINE 26 "System\Win32\DebugApi.hsc" #-}

type PID = DWORD
type TID = DWORD
type DebugEventId = (PID, TID)
type ForeignAddress = Word32

type PHANDLE = Ptr ()
type THANDLE = Ptr ()

type ThreadInfo = (THANDLE, ForeignAddress, ForeignAddress)   -- handle to thread, thread local, thread start
type ImageInfo = (HANDLE, ForeignAddress, DWORD, DWORD, ForeignAddress)
type ExceptionInfo = (Bool, Bool, ForeignAddress) -- First chance, continuable, address


data Exception
    = UnknownException
    | AccessViolation Bool ForeignAddress
    | ArrayBoundsExceeded
    | Breakpoint
    | DataTypeMisalignment
    | FltDenormalOperand
    | FltDivideByZero
    | FltInexactResult
    | FltInvalidOperation
    | FltOverflow
    | FltStackCheck
    | FltUnderflow
    | IllegalInstruction
    | InPageError
    | IntDivideByZero
    | IntOverflow
    | InvalidDisposition
    | NonContinuable
    | PrivilegedInstruction
    | SingleStep
    | StackOverflow
    deriving (Show)
    
data DebugEventInfo
    = UnknownDebugEvent
    | Exception         ExceptionInfo Exception
    | CreateThread      ThreadInfo
    | CreateProcess     PHANDLE ImageInfo ThreadInfo
    | ExitThread        TID
    | ExitProcess       PID
    | LoadDll           ImageInfo
    | UnloadDll         TID
    | DebugString       ForeignAddress Bool WORD
    deriving (Show)

type DebugEvent = (DebugEventId, DebugEventInfo)

--------------------------------------------------------------------------
-- Handling debugevents

peekDebugEvent :: Ptr a -> IO DebugEvent
peekDebugEvent p = do
    code <- ((\hsc_ptr -> peekByteOff hsc_ptr 0)) p
{-# LINE 84 "System\Win32\DebugApi.hsc" #-}
    pid  <- ((\hsc_ptr -> peekByteOff hsc_ptr 4)) p
{-# LINE 85 "System\Win32\DebugApi.hsc" #-}
    tid  <- ((\hsc_ptr -> peekByteOff hsc_ptr 8)) p
{-# LINE 86 "System\Win32\DebugApi.hsc" #-}
    r <- rest (code::DWORD) (plusPtr p ((12)))
{-# LINE 87 "System\Win32\DebugApi.hsc" #-}
    return ((pid,tid), r)
    where
        dwZero = 0 :: DWORD
        wZero = 0 :: WORD
        
        rest (1) p = do
{-# LINE 93 "System\Win32\DebugApi.hsc" #-}
            chance  <- ((\hsc_ptr -> peekByteOff hsc_ptr 80)) p
{-# LINE 94 "System\Win32\DebugApi.hsc" #-}
            flags   <- ((\hsc_ptr -> peekByteOff hsc_ptr 4)) p
{-# LINE 95 "System\Win32\DebugApi.hsc" #-}
            addr    <- ((\hsc_ptr -> peekByteOff hsc_ptr 12)) p
{-# LINE 96 "System\Win32\DebugApi.hsc" #-}
            code    <- ((\hsc_ptr -> peekByteOff hsc_ptr 0)) p
{-# LINE 97 "System\Win32\DebugApi.hsc" #-}
            e <- case code::DWORD of
                (3221225477)         -> return $ AccessViolation False 0
{-# LINE 99 "System\Win32\DebugApi.hsc" #-}
                (3221225612)    -> return ArrayBoundsExceeded
{-# LINE 100 "System\Win32\DebugApi.hsc" #-}
                (2147483651)               -> return Breakpoint
{-# LINE 101 "System\Win32\DebugApi.hsc" #-}
                (2147483650)    -> return DataTypeMisalignment
{-# LINE 102 "System\Win32\DebugApi.hsc" #-}
                (3221225613)     -> return FltDenormalOperand
{-# LINE 103 "System\Win32\DebugApi.hsc" #-}
                (3221225614)       -> return FltDivideByZero
{-# LINE 104 "System\Win32\DebugApi.hsc" #-}
                (3221225615)       -> return FltInexactResult
{-# LINE 105 "System\Win32\DebugApi.hsc" #-}
                (3221225616)    -> return FltInvalidOperation
{-# LINE 106 "System\Win32\DebugApi.hsc" #-}
                (3221225617)             -> return FltOverflow
{-# LINE 107 "System\Win32\DebugApi.hsc" #-}
                (3221225618)          -> return FltStackCheck
{-# LINE 108 "System\Win32\DebugApi.hsc" #-}
                (3221225619)            -> return FltUnderflow
{-# LINE 109 "System\Win32\DebugApi.hsc" #-}
                (3221225501)      -> return IllegalInstruction
{-# LINE 110 "System\Win32\DebugApi.hsc" #-}
                (3221225478)            -> return InPageError
{-# LINE 111 "System\Win32\DebugApi.hsc" #-}
                (3221225620)       -> return IntDivideByZero
{-# LINE 112 "System\Win32\DebugApi.hsc" #-}
                (3221225621)             -> return IntOverflow
{-# LINE 113 "System\Win32\DebugApi.hsc" #-}
                (3221225510)      -> return InvalidDisposition
{-# LINE 114 "System\Win32\DebugApi.hsc" #-}
                (3221225509) -> return NonContinuable
{-# LINE 115 "System\Win32\DebugApi.hsc" #-}
                (3221225622)         -> return PrivilegedInstruction
{-# LINE 116 "System\Win32\DebugApi.hsc" #-}
                (2147483652)              -> return SingleStep
{-# LINE 117 "System\Win32\DebugApi.hsc" #-}
                (3221225725)           -> return StackOverflow
{-# LINE 118 "System\Win32\DebugApi.hsc" #-}
                _                                           -> return UnknownException 
            return $ Exception (chance/=dwZero, flags==dwZero, addr) e

        rest (2) p = do
{-# LINE 122 "System\Win32\DebugApi.hsc" #-}
            handle <- ((\hsc_ptr -> peekByteOff hsc_ptr 0))             p
{-# LINE 123 "System\Win32\DebugApi.hsc" #-}
            local <- ((\hsc_ptr -> peekByteOff hsc_ptr 4))    p
{-# LINE 124 "System\Win32\DebugApi.hsc" #-}
            start <- ((\hsc_ptr -> peekByteOff hsc_ptr 8))       p
{-# LINE 125 "System\Win32\DebugApi.hsc" #-}
            return $ CreateThread (handle, local, start)

        rest (3) p = do
{-# LINE 128 "System\Win32\DebugApi.hsc" #-}
            file    <- ((\hsc_ptr -> peekByteOff hsc_ptr 0)) p
{-# LINE 129 "System\Win32\DebugApi.hsc" #-}
            proc    <- ((\hsc_ptr -> peekByteOff hsc_ptr 4)) p
{-# LINE 130 "System\Win32\DebugApi.hsc" #-}
            thread  <- ((\hsc_ptr -> peekByteOff hsc_ptr 8)) p
{-# LINE 131 "System\Win32\DebugApi.hsc" #-}
            imgbase <- ((\hsc_ptr -> peekByteOff hsc_ptr 12)) p
{-# LINE 132 "System\Win32\DebugApi.hsc" #-}
            dbgoff  <- ((\hsc_ptr -> peekByteOff hsc_ptr 16)) p
{-# LINE 133 "System\Win32\DebugApi.hsc" #-}
            dbgsize <- ((\hsc_ptr -> peekByteOff hsc_ptr 20)) p
{-# LINE 134 "System\Win32\DebugApi.hsc" #-}
            local   <- ((\hsc_ptr -> peekByteOff hsc_ptr 24)) p
{-# LINE 135 "System\Win32\DebugApi.hsc" #-}
            start   <- ((\hsc_ptr -> peekByteOff hsc_ptr 28)) p
{-# LINE 136 "System\Win32\DebugApi.hsc" #-}
            imgname <- ((\hsc_ptr -> peekByteOff hsc_ptr 32)) p
{-# LINE 137 "System\Win32\DebugApi.hsc" #-}
            --unicode <- (#peek CREATE_PROCESS_DEBUG_INFO, fUnicode) p
            return $ CreateProcess proc 
                        (file, imgbase, dbgoff, dbgsize, imgname) --, unicode/=wZero)
                        (thread, local, start)
        
        rest (4) p =
{-# LINE 143 "System\Win32\DebugApi.hsc" #-}
            ((\hsc_ptr -> peekByteOff hsc_ptr 0)) p >>= return.ExitThread
{-# LINE 144 "System\Win32\DebugApi.hsc" #-}
        
        rest (5) p =
{-# LINE 146 "System\Win32\DebugApi.hsc" #-}
            ((\hsc_ptr -> peekByteOff hsc_ptr 0)) p >>= return.ExitProcess
{-# LINE 147 "System\Win32\DebugApi.hsc" #-}
        
        rest (6) p = do
{-# LINE 149 "System\Win32\DebugApi.hsc" #-}
            file    <- ((\hsc_ptr -> peekByteOff hsc_ptr 0)) p
{-# LINE 150 "System\Win32\DebugApi.hsc" #-}
            imgbase <- ((\hsc_ptr -> peekByteOff hsc_ptr 4)) p
{-# LINE 151 "System\Win32\DebugApi.hsc" #-}
            dbgoff  <- ((\hsc_ptr -> peekByteOff hsc_ptr 8)) p
{-# LINE 152 "System\Win32\DebugApi.hsc" #-}
            dbgsize <- ((\hsc_ptr -> peekByteOff hsc_ptr 12)) p
{-# LINE 153 "System\Win32\DebugApi.hsc" #-}
            imgname <- ((\hsc_ptr -> peekByteOff hsc_ptr 16)) p
{-# LINE 154 "System\Win32\DebugApi.hsc" #-}
            --unicode <- (#peek LOAD_DLL_DEBUG_INFO, fUnicode) p
            return $ 
                LoadDll (file, imgbase, dbgoff, dbgsize, imgname)--, unicode/=wZero)

        rest (8) p = do
{-# LINE 159 "System\Win32\DebugApi.hsc" #-}
            dat     <- ((\hsc_ptr -> peekByteOff hsc_ptr 0)) p
{-# LINE 160 "System\Win32\DebugApi.hsc" #-}
            unicode <- ((\hsc_ptr -> peekByteOff hsc_ptr 4)) p
{-# LINE 161 "System\Win32\DebugApi.hsc" #-}
            length  <- ((\hsc_ptr -> peekByteOff hsc_ptr 6)) p
{-# LINE 162 "System\Win32\DebugApi.hsc" #-}
            return $ DebugString dat (unicode/=wZero) length
        
        rest (7) p =
{-# LINE 165 "System\Win32\DebugApi.hsc" #-}
            ((\hsc_ptr -> peekByteOff hsc_ptr 0)) p >>= return.UnloadDll
{-# LINE 166 "System\Win32\DebugApi.hsc" #-}

        rest _ _ = return UnknownDebugEvent



waitForDebugEvent :: Maybe Int -> IO (Maybe DebugEvent)
waitForDebugEvent timeout = allocaBytes ((96)) $ \buf -> do
{-# LINE 173 "System\Win32\DebugApi.hsc" #-}
    res <- c_WaitForDebugEvent buf $ maybe (4294967295) fromIntegral timeout
{-# LINE 174 "System\Win32\DebugApi.hsc" #-}
    if res
        then peekDebugEvent buf >>= return.Just
        else getLastError >>= \e -> case e of
            (6)   -> return Nothing
{-# LINE 178 "System\Win32\DebugApi.hsc" #-}
            (121)      -> return Nothing
{-# LINE 179 "System\Win32\DebugApi.hsc" #-}
            _                               -> die e
    where
        die res = failWith "WaitForDebugEvent" res

getDebugEvents :: Int -> IO [DebugEvent]
getDebugEvents timeout = waitForDebugEvent (Just timeout) >>= getMore
    where
        getMore e = case e of
            Nothing -> return []
            Just e  -> do
                rest <- waitForDebugEvent (Just 0) >>= getMore
                return $ e:rest

continueDebugEvent :: DebugEventId -> Bool -> IO ()
continueDebugEvent (pid,tid) cont =
    failIf_ not "ContinueDebugEvent" $ c_ContinueDebugEvent pid tid cont'
    where
        cont' = if cont
            then (65538)
{-# LINE 198 "System\Win32\DebugApi.hsc" #-}
            else (2147549185)
{-# LINE 199 "System\Win32\DebugApi.hsc" #-}

--------------------------------------------------------------------------
-- Process control

debugActiveProcess :: PID -> IO ()
debugActiveProcess pid =
    failIf_ not "debugActiveProcess: DebugActiveProcess" $
        c_DebugActiveProcess pid

-- Windows XP
-- debugActiveProcessStop :: PID -> IO ()
-- debugActiveProcessStop pid =
--     failIf_ not "debugActiveProcessStop: DebugActiveProcessStop" $
--         c_DebugActiveProcessStop pid

--------------------------------------------------------------------------
-- Process memory

peekProcessMemory :: PHANDLE -> ForeignAddress -> Int -> Ptr a -> IO ()
peekProcessMemory proc addr size buf =
    failIf_ not "peekProcessMemory: ReadProcessMemory" $
        c_ReadProcessMemory proc (plusPtr nullPtr $ fromIntegral addr) (castPtr buf) (fromIntegral size) nullPtr

readProcessMemory :: PHANDLE -> ForeignAddress -> Int -> IO (ForeignPtr a)
readProcessMemory proc addr size = do
    res <- mallocForeignPtrBytes size
    withForeignPtr res $ peekProcessMemory proc addr size
    return res

pokeProcessMemory :: PHANDLE -> ForeignAddress -> Int -> Ptr a -> IO ()
pokeProcessMemory proc addr size buf =
    failIf_ not "pokeProcessMemory: WriteProcessMemory" $
        c_WriteProcessMemory proc (plusPtr nullPtr $ fromIntegral addr) (castPtr buf) (fromIntegral size) nullPtr

withProcessMemory :: PHANDLE -> ForeignAddress -> Int -> (Ptr a -> IO b) -> IO b
withProcessMemory proc addr size act = allocaBytes size $ \buf -> do
    peekProcessMemory proc addr size buf
    res <- act buf
    pokeProcessMemory proc addr size buf
    return res

peekP :: (Storable a) => PHANDLE -> ForeignAddress -> IO a
peekP proc addr = fixIO $ \res -> withProcessMemory proc addr (sizeOf res) peek

pokeP :: (Storable a) => PHANDLE -> ForeignAddress -> a -> IO ()
pokeP proc addr v = withProcessMemory proc addr (sizeOf v) $ \buf -> poke buf v

--------------------------------------------------------------------------
-- Thread Control

suspendThread :: THANDLE -> IO DWORD
suspendThread t =
    failIf (==0-1) "SuspendThread" $ c_SuspendThread t

resumeThread :: THANDLE -> IO DWORD
resumeThread t =
    failIf (==0-1) "ResumeThread" $ c_ResumeThread t

withSuspendedThread :: THANDLE -> IO a -> IO a
withSuspendedThread t = bracket_ (suspendThread t) (resumeThread t)

--getThreadId :: THANDLE -> IO TID
--getThreadId = failIf (==0) "GetThreadId" . c_GetThreadId

--------------------------------------------------------------------------
-- Thread register control
getThreadContext :: THANDLE -> Ptr a -> IO ()
getThreadContext t buf =
    failIf_ not "GetThreadContext" $ c_GetThreadContext t (castPtr buf)

setThreadContext :: THANDLE -> Ptr a -> IO ()
setThreadContext t buf =
    failIf_ not "SetThreadContext" $ c_SetThreadContext t (castPtr buf)

useAllRegs :: Ptr a -> IO ()
useAllRegs buf = ((\hsc_ptr -> pokeByteOff hsc_ptr 0)) buf v
{-# LINE 275 "System\Win32\DebugApi.hsc" #-}
    where
        v = (65567) :: DWORD
{-# LINE 277 "System\Win32\DebugApi.hsc" #-}

withThreadContext :: THANDLE -> (Ptr a -> IO b) -> IO b
withThreadContext t act =
    allocaBytes ((716))
{-# LINE 281 "System\Win32\DebugApi.hsc" #-}
        $ \buf -> bracket_
            (useAllRegs buf >> getThreadContext t buf)
            (useAllRegs buf >> setThreadContext t buf)
            (act buf)


eax, ebx, ecx, edx :: Int
esi, edi :: Int
ebp, eip, esp :: Int
segCs, segDs, segEs, segFs, segGs :: Int
eFlags :: Int

eax = ((176))
{-# LINE 294 "System\Win32\DebugApi.hsc" #-}
ebx = ((164))
{-# LINE 295 "System\Win32\DebugApi.hsc" #-}
ecx = ((172))
{-# LINE 296 "System\Win32\DebugApi.hsc" #-}
edx = ((168))
{-# LINE 297 "System\Win32\DebugApi.hsc" #-}
esi = ((160))
{-# LINE 298 "System\Win32\DebugApi.hsc" #-}
edi = ((156))
{-# LINE 299 "System\Win32\DebugApi.hsc" #-}
ebp = ((180))
{-# LINE 300 "System\Win32\DebugApi.hsc" #-}
eip = ((184))
{-# LINE 301 "System\Win32\DebugApi.hsc" #-}
esp = ((196))
{-# LINE 302 "System\Win32\DebugApi.hsc" #-}
segCs = ((188))
{-# LINE 303 "System\Win32\DebugApi.hsc" #-}
segDs = ((152))
{-# LINE 304 "System\Win32\DebugApi.hsc" #-}
segEs = ((148))
{-# LINE 305 "System\Win32\DebugApi.hsc" #-}
segFs = ((144))
{-# LINE 306 "System\Win32\DebugApi.hsc" #-}
segGs = ((140))
{-# LINE 307 "System\Win32\DebugApi.hsc" #-}
eFlags  = ((192))
{-# LINE 308 "System\Win32\DebugApi.hsc" #-}

dr :: Int -> Int
dr n = case n of
    0 -> ((4))
{-# LINE 312 "System\Win32\DebugApi.hsc" #-}
    1 -> ((8))
{-# LINE 313 "System\Win32\DebugApi.hsc" #-}
    2 -> ((12))
{-# LINE 314 "System\Win32\DebugApi.hsc" #-}
    3 -> ((16))
{-# LINE 315 "System\Win32\DebugApi.hsc" #-}
    6 -> ((20))
{-# LINE 316 "System\Win32\DebugApi.hsc" #-}
    7 -> ((24))
{-# LINE 317 "System\Win32\DebugApi.hsc" #-}
    _ -> undefined
    
setReg :: Ptr a -> Int -> DWORD -> IO ()
setReg = pokeByteOff

getReg :: Ptr a -> Int -> IO DWORD
getReg = peekByteOff

modReg :: Ptr a -> Int -> (DWORD->DWORD) -> IO DWORD
modReg buf r f = do
    old <- getReg buf r
    setReg buf r (f old)
    return old

makeModThreadContext :: [(Int, DWORD->DWORD)] -> Ptr a -> IO [DWORD]
makeModThreadContext act buf = mapM (uncurry $ modReg buf) act

modifyThreadContext :: THANDLE -> [(Int, DWORD->DWORD)] -> IO [DWORD]
modifyThreadContext t a = withThreadContext t $ makeModThreadContext a

--------------------------------------------------------------------------
-- On process being debugged

outputDebugString :: String -> IO ()
outputDebugString s = withTString s $ \s -> c_OutputDebugString s

--------------------------------------------------------------------------
-- Raw imports

foreign import stdcall "windows.h SuspendThread"
    c_SuspendThread :: THANDLE -> IO DWORD

foreign import stdcall "windows.h ResumeThread"
    c_ResumeThread :: THANDLE -> IO DWORD

foreign import stdcall "windows.h WaitForDebugEvent"
    c_WaitForDebugEvent :: Ptr () -> DWORD -> IO BOOL

foreign import stdcall "windows.h ContinueDebugEvent"
    c_ContinueDebugEvent :: DWORD -> DWORD -> DWORD -> IO BOOL

foreign import stdcall "windows.h DebugActiveProcess"
    c_DebugActiveProcess :: DWORD -> IO Bool
    
-- Windows XP
-- foreign import stdcall "windows.h DebugActiveProcessStop"
--     c_DebugActiveProcessStop :: DWORD -> IO Bool

foreign import stdcall "windows.h ReadProcessMemory" c_ReadProcessMemory :: 
    PHANDLE -> Ptr () -> Ptr Word8 -> DWORD -> Ptr DWORD -> IO BOOL

foreign import stdcall "windows.h WriteProcessMemory" c_WriteProcessMemory ::
    PHANDLE -> Ptr () -> Ptr Word8 -> DWORD -> Ptr DWORD -> IO BOOL

foreign import stdcall "windows.h GetThreadContext"
    c_GetThreadContext :: THANDLE -> Ptr () -> IO BOOL

foreign import stdcall "windows.h SetThreadContext"
    c_SetThreadContext :: THANDLE -> Ptr () -> IO BOOL

--foreign import stdcall "windows.h GetThreadId"
--    c_GetThreadId :: THANDLE -> IO TID

foreign import stdcall "windows.h OutputDebugStringW"
    c_OutputDebugString :: LPTSTR -> IO ()

foreign import stdcall "windows.h IsDebuggerPresent"
    isDebuggerPresent :: IO BOOL

foreign import stdcall "windows.h  DebugBreak"
    debugBreak :: IO ()
