{-# OPTIONS_GHC -optc-D__HUGS__ #-}
{-# OPTIONS_GHC -optc-DUNICODE #-}
{-# INCLUDE <windows.h> #-}
{-# INCLUDE <tlhelp32.h> #-}
{-# LINE 1 "System\Win32\Process.hsc" #-}
-----------------------------------------------------------------------------
{-# LINE 2 "System\Win32\Process.hsc" #-}
-- |
-- Module      :  System.Win32.Process
-- Copyright   :  (c) Alastair Reid, 1997-2003
-- License     :  BSD-style (see the file libraries/base/LICENSE)
--
-- Maintainer  :  Esa Ilari Vuokko <ei@vuokko.info>
-- Stability   :  provisional
-- Portability :  portable
--
-- A collection of FFI declarations for interfacing with Win32.
--
-----------------------------------------------------------------------------

module System.Win32.Process where
import Control.Exception    ( bracket )
import Control.Monad        ( liftM5 )
import Foreign              ( Ptr, peekByteOff, allocaBytes, pokeByteOff
                            , plusPtr )
import System.Win32.File    ( closeHandle )
import System.Win32.Types


{-# LINE 24 "System\Win32\Process.hsc" #-}

{-# LINE 25 "System\Win32\Process.hsc" #-}

-- constant to wait for a very long time.
iNFINITE :: DWORD
iNFINITE = 4294967295
{-# LINE 29 "System\Win32\Process.hsc" #-}

foreign import stdcall unsafe "windows.h Sleep"
  sleep :: DWORD -> IO ()


type ProcessId = DWORD
type ProcessHandle = HANDLE
type ProcessAccessRights = DWORD
pROCESS_ALL_ACCESS             :: ProcessAccessRights
pROCESS_ALL_ACCESS             =  2035711
pROCESS_CREATE_PROCESS         :: ProcessAccessRights
pROCESS_CREATE_PROCESS         =  128
pROCESS_CREATE_THREAD          :: ProcessAccessRights
pROCESS_CREATE_THREAD          =  2
pROCESS_DUP_HANDLE             :: ProcessAccessRights
pROCESS_DUP_HANDLE             =  64
pROCESS_QUERY_INFORMATION      :: ProcessAccessRights
pROCESS_QUERY_INFORMATION      =  1024
pROCESS_SET_QUOTA              :: ProcessAccessRights
pROCESS_SET_QUOTA              =  256
pROCESS_SET_INFORMATION        :: ProcessAccessRights
pROCESS_SET_INFORMATION        =  512
pROCESS_TERMINATE              :: ProcessAccessRights
pROCESS_TERMINATE              =  1
pROCESS_VM_OPERATION           :: ProcessAccessRights
pROCESS_VM_OPERATION           =  8
pROCESS_VM_READ                :: ProcessAccessRights
pROCESS_VM_READ                =  16
pROCESS_VM_WRITE               :: ProcessAccessRights
pROCESS_VM_WRITE               =  32
sYNCHORNIZE                    :: ProcessAccessRights
sYNCHORNIZE                    =  1048576

{-# LINE 51 "System\Win32\Process.hsc" #-}

foreign import stdcall unsafe "windows.h OpenProcess"
    c_OpenProcess :: ProcessAccessRights -> BOOL -> ProcessId -> IO ProcessHandle


openProcess :: ProcessAccessRights -> BOOL -> ProcessId -> IO ProcessHandle
openProcess r inh i = failIfNull "OpenProcess" $ c_OpenProcess r inh i

type Th32SnapHandle = HANDLE
type Th32SnapFlags = DWORD
-- | ProcessId, number of threads, parent ProcessId, process base priority, path of executable file
type ProcessEntry32 = (ProcessId, Int, ProcessId, LONG, String)

tH32CS_SNAPALL         :: Th32SnapFlags
tH32CS_SNAPALL         =  15
tH32CS_SNAPHEAPLIST    :: Th32SnapFlags
tH32CS_SNAPHEAPLIST    =  1
tH32CS_SNAPMODULE      :: Th32SnapFlags
tH32CS_SNAPMODULE      =  8
tH32CS_SNAPPROCESS     :: Th32SnapFlags
tH32CS_SNAPPROCESS     =  2
tH32CS_SNAPTHREAD      :: Th32SnapFlags
tH32CS_SNAPTHREAD      =  4

{-# LINE 71 "System\Win32\Process.hsc" #-}
{-
    , tH32CS_SNAPGETALLMODS = TH32CS_GETALLMODS
    , tH32CS_SNAPNOHEAPS    = TH32CS_SNAPNOHEAPS 
-}

foreign import stdcall unsafe "tlhelp32.h CreateToolhelp32Snapshot"
    c_CreateToolhelp32Snapshot :: Th32SnapFlags -> ProcessId -> IO Th32SnapHandle

foreign import stdcall unsafe "tlhelp32.h Process32FirstW"
    c_Process32First :: Th32SnapHandle -> Ptr ProcessEntry32 -> IO BOOL

foreign import stdcall unsafe "tlhelp32.h Process32NextW"
    c_Process32Next :: Th32SnapHandle -> Ptr ProcessEntry32 -> IO BOOL

-- | Create a snapshot of specified resources.  Call closeHandle to close snapshot.
createToolhelp32Snapshot :: Th32SnapFlags -> Maybe ProcessId -> IO Th32SnapHandle
createToolhelp32Snapshot f p
    = failIfNull "CreateToolhelp32Snapshot" $ c_CreateToolhelp32Snapshot
        f (maybe 0 id p)

withTh32Snap :: Th32SnapFlags -> Maybe ProcessId -> (Th32SnapHandle -> IO a) -> IO a
withTh32Snap f p = bracket (createToolhelp32Snapshot f p) (closeHandle)


peekProcessEntry32 :: Ptr ProcessEntry32 -> IO ProcessEntry32
peekProcessEntry32 buf = liftM5 (,,,,)
    (((\hsc_ptr -> peekByteOff hsc_ptr 8)) buf)
{-# LINE 98 "System\Win32\Process.hsc" #-}
    (((\hsc_ptr -> peekByteOff hsc_ptr 20)) buf)
{-# LINE 99 "System\Win32\Process.hsc" #-}
    (((\hsc_ptr -> peekByteOff hsc_ptr 24)) buf)
{-# LINE 100 "System\Win32\Process.hsc" #-}
    (((\hsc_ptr -> peekByteOff hsc_ptr 28)) buf)
{-# LINE 101 "System\Win32\Process.hsc" #-}
    (peekTString $ ((\hsc_ptr -> hsc_ptr `plusPtr` 36)) buf)
{-# LINE 102 "System\Win32\Process.hsc" #-}

-- | Enumerate processes using Process32First and Process32Next
th32SnapEnumProcesses :: Th32SnapHandle -> IO [ProcessEntry32]
th32SnapEnumProcesses h = allocaBytes ((556)) $ \pe -> do
{-# LINE 106 "System\Win32\Process.hsc" #-}
    putStrLn "1"
    ((\hsc_ptr -> pokeByteOff hsc_ptr 0)) pe (((556))::DWORD)
{-# LINE 108 "System\Win32\Process.hsc" #-}
    putStrLn "2"
    ok <- c_Process32First h pe
    putStrLn "3"
    readAndNext ok pe []
    where
        readAndNext ok pe res
            | not ok    = do
                err <- getLastError
                print err
                if err==(18)
{-# LINE 118 "System\Win32\Process.hsc" #-}
                    then return $ reverse res
                    else failWith "th32SnapEnumProcesses: Process32First/Process32Next" err
            | otherwise = do
                putStrLn "reading"
                entry <- peekProcessEntry32 pe
                ok' <- c_Process32Next h pe
                readAndNext ok' pe (entry:res)
