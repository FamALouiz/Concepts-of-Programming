{-# OPTIONS_GHC -optc-D__HUGS__ #-}
{-# OPTIONS_GHC -optc-DUNICODE #-}
{-# INCLUDE "windows.h" #-}
{-# INCLUDE "mapi.h" #-}
{-# LINE 1 "System\Win32\SimpleMAPI.hsc" #-}
-----------------------------------------------------------------------------
{-# LINE 2 "System\Win32\SimpleMAPI.hsc" #-}
-- |
-- Module      :  System.Win32.SimpleMAPI
-- Copyright   :  (c) Esa Ilari Vuokko, 2006
-- License     :  BSD-style (see the file LICENSE)
--
-- Maintainer  :  Esa Ilari Vuokko <ei@vuokko.info>
-- Stability   :  provisional
-- Portability :  portable
--
-- FFI-bindings to interact with SimpleMAPI
--
-----------------------------------------------------------------------------
module System.Win32.SimpleMAPI
where
import Control.Exception    ( bracket, handle, throw, finally )
import Control.Monad        ( liftM5 )
import Foreign              ( FunPtr, newForeignPtr, pokeByteOff, maybeWith
                            , Ptr, castPtr, castPtrToFunPtr, nullPtr
                            , touchForeignPtr, alloca, peek, allocaBytes
                            , minusPtr, plusPtr, copyBytes, ForeignPtr )
import Foreign.C            ( withCString, withCStringLen )
import Graphics.Win32.GDI.Types     ( HWND)
import System.Win32.DLL     ( loadLibrary, c_GetProcAddress, freeLibrary
                            , c_FreeLibraryFinaliser )
import System.Win32.Types   ( DWORD, LPSTR, HMODULE, failIfNull )


{-# LINE 29 "System\Win32\SimpleMAPI.hsc" #-}

{-# LINE 30 "System\Win32\SimpleMAPI.hsc" #-}


type ULONG = DWORD
type LHANDLE = ULONG
newtype MapiRecipDesc = MapiRecipDesc ()
type MapiFlag = ULONG
mAPI_LOGON_UI          :: MapiFlag
mAPI_LOGON_UI          =  1
mAPI_NEW_SESSION       :: MapiFlag
mAPI_NEW_SESSION       =  2
mAPI_FORCE_DOWNLOAD    :: MapiFlag
mAPI_FORCE_DOWNLOAD    =  4096
mAPI_LOGOFF_SHARED     :: MapiFlag
mAPI_LOGOFF_SHARED     =  1
mAPI_LOGOFF_UI         :: MapiFlag
mAPI_LOGOFF_UI         =  2
mAPI_DIALOG            :: MapiFlag
mAPI_DIALOG            =  8
mAPI_UNREAD_ONLY       :: MapiFlag
mAPI_UNREAD_ONLY       =  32
mAPI_LONG_MSGID        :: MapiFlag
mAPI_LONG_MSGID        =  16384
mAPI_GUARANTEE_FIFO    :: MapiFlag
mAPI_GUARANTEE_FIFO    =  256
mAPI_ENVELOPE_ONLY     :: MapiFlag
mAPI_ENVELOPE_ONLY     =  64
mAPI_PEEK              :: MapiFlag
mAPI_PEEK              =  128
mAPI_BODY_AS_FILE      :: MapiFlag
mAPI_BODY_AS_FILE      =  512
mAPI_SUPPRESS_ATTACH   :: MapiFlag
mAPI_SUPPRESS_ATTACH   =  2048
mAPI_AB_NOMODIFY       :: MapiFlag
mAPI_AB_NOMODIFY       =  1024
mAPI_OLE               :: MapiFlag
mAPI_OLE               =  1
mAPI_OLE_STATIC        :: MapiFlag
mAPI_OLE_STATIC        =  2
mAPI_UNREAD            :: MapiFlag
mAPI_UNREAD            =  1
mAPI_RECEIPT_REQUESTED  :: MapiFlag
mAPI_RECEIPT_REQUESTED  =  2
mAPI_SENT              :: MapiFlag
mAPI_SENT              =  4

{-# LINE 57 "System\Win32\SimpleMAPI.hsc" #-}

mapiErrors :: [(ULONG,String)]
mapiErrors =
    [ ((0)         , "Success")
{-# LINE 61 "System\Win32\SimpleMAPI.hsc" #-}
    , ((2)          , "Generic error or multiple errors")
{-# LINE 62 "System\Win32\SimpleMAPI.hsc" #-}
    , ((1)       , "User aborted")
{-# LINE 63 "System\Win32\SimpleMAPI.hsc" #-}
    , ((3)    , "Logoff failed")
{-# LINE 64 "System\Win32\SimpleMAPI.hsc" #-}
    , ((3)    , "Logon failed")
{-# LINE 65 "System\Win32\SimpleMAPI.hsc" #-}
    , ((4)        , "Disk full")
{-# LINE 66 "System\Win32\SimpleMAPI.hsc" #-}
    , ((5)      , "Not enough memory")
{-# LINE 67 "System\Win32\SimpleMAPI.hsc" #-}
    , ((6)    , "Access denied")
{-# LINE 68 "System\Win32\SimpleMAPI.hsc" #-}
    , ((6)    , "BLK_TOO_SMALL")
{-# LINE 69 "System\Win32\SimpleMAPI.hsc" #-}
    , ((8), "Too many open sessions")
{-# LINE 70 "System\Win32\SimpleMAPI.hsc" #-}
    , ((9)   , "Too many open files")
{-# LINE 71 "System\Win32\SimpleMAPI.hsc" #-}
    , ((10)      , "Too many recipients")
{-# LINE 72 "System\Win32\SimpleMAPI.hsc" #-}
    , ((11)     , "Attachemnt not found")
{-# LINE 73 "System\Win32\SimpleMAPI.hsc" #-}
    , ((12)  , "Couldn't open attachment")
{-# LINE 74 "System\Win32\SimpleMAPI.hsc" #-}
    , ((13) , "Couldn't write attachment")
{-# LINE 75 "System\Win32\SimpleMAPI.hsc" #-}
    , ((14)        , "Unknown recipient")
{-# LINE 76 "System\Win32\SimpleMAPI.hsc" #-}
    , ((15)            , "Bad recipient type")
{-# LINE 77 "System\Win32\SimpleMAPI.hsc" #-}
    , ((16)              , "No messages")
{-# LINE 78 "System\Win32\SimpleMAPI.hsc" #-}
    , ((17)          , "Invalid message")
{-# LINE 79 "System\Win32\SimpleMAPI.hsc" #-}
    , ((18)           , "Text too large")
{-# LINE 80 "System\Win32\SimpleMAPI.hsc" #-}
    , ((19)          , "Invalid session")
{-# LINE 81 "System\Win32\SimpleMAPI.hsc" #-}
    , ((20)       , "Type not supported")
{-# LINE 82 "System\Win32\SimpleMAPI.hsc" #-}
    , ((21)      , "Ambigious recipient")
{-# LINE 83 "System\Win32\SimpleMAPI.hsc" #-}
    , ((21)          , "Ambigious recipient")
{-# LINE 84 "System\Win32\SimpleMAPI.hsc" #-}
    , ((22)           , "Message in use")
{-# LINE 85 "System\Win32\SimpleMAPI.hsc" #-}
    , ((23)          , "Network failure")
{-# LINE 86 "System\Win32\SimpleMAPI.hsc" #-}
    , ((24)       , "Invalid editfields")
{-# LINE 87 "System\Win32\SimpleMAPI.hsc" #-}
    , ((25)           , "Invalid recipient(s)")
{-# LINE 88 "System\Win32\SimpleMAPI.hsc" #-}
    , ((26)            , "Not supported")
{-# LINE 89 "System\Win32\SimpleMAPI.hsc" #-}
    ]

mapiErrorString :: ULONG -> String
mapiErrorString c = case lookup c mapiErrors of
    Nothing -> "Unkown error (" ++ show c ++ ")"
    Just x  -> x

mapiFail :: String -> IO ULONG -> IO ULONG
mapiFail name act = act >>= \err -> if err==(0)
{-# LINE 98 "System\Win32\SimpleMAPI.hsc" #-}
    then return err
    else fail $ name ++ ": " ++ mapiErrorString err


mapiFail_ :: String -> IO ULONG -> IO ()
mapiFail_ n a = mapiFail n a >> return ()

type MapiLogonType = ULONG -> LPSTR -> LPSTR -> MapiFlag -> ULONG -> Ptr LHANDLE -> IO ULONG
foreign import stdcall "dynamic" mkMapiLogon :: FunPtr MapiLogonType -> MapiLogonType

type MapiLogoffType = LHANDLE -> ULONG -> MapiFlag -> ULONG -> IO ULONG
foreign import stdcall "dynamic" mkMapiLogoff :: FunPtr MapiLogoffType -> MapiLogoffType

type MapiResolveNameType =
    LHANDLE -> ULONG -> LPSTR -> MapiFlag -> ULONG
    -> Ptr (Ptr MapiRecipDesc) -> IO ULONG
foreign import stdcall "dynamic" mkMapiResolveName :: FunPtr MapiResolveNameType -> MapiResolveNameType

type MapiFreeBufferType = Ptr () -> IO ULONG
foreign import stdcall "dynamic" mkMapiFreeBuffer :: FunPtr MapiFreeBufferType -> MapiFreeBufferType

type MapiSendMailType = LHANDLE -> ULONG -> Ptr Message -> MapiFlag -> ULONG -> IO ULONG
foreign import stdcall "dynamic" mkMapiSendMail :: FunPtr MapiSendMailType -> MapiSendMailType

data MapiFuncs = MapiFuncs
    { mapifLogon    :: MapiLogonType
    , mapifLogoff   :: MapiLogoffType
    , mapifResolveName  :: MapiResolveNameType
    , mapifFreeBuffer   :: MapiFreeBufferType
    , mapifSendMail :: MapiSendMailType
    }

type MapiLoaded = (MapiFuncs, ForeignPtr ())


-- |
loadMapiFuncs :: String -> HMODULE -> IO MapiFuncs
loadMapiFuncs dllname dll =  liftM5 MapiFuncs
    (loadProc "MAPILogon"       dll mkMapiLogon)
    (loadProc "MAPILogoff"      dll mkMapiLogoff)
    (loadProc "MAPIResolveName" dll mkMapiResolveName)
    (loadProc "MAPIFreeBuffer"  dll mkMapiFreeBuffer)
    (loadProc "MAPISendMail"    dll mkMapiSendMail)
    where
        loadProc name dll conv = withCString name $ \name' -> do
            proc <- failIfNull ("loadMapiDll: " ++ dllname ++ ": " ++ name)
                        $ c_GetProcAddress dll name'
            return $ conv $ castPtrToFunPtr proc
-- |
loadMapiDll :: String -> IO (MapiFuncs, HMODULE)
loadMapiDll dllname = do
    dll <- loadLibrary dllname
    handle (\e -> freeLibrary dll >> throw e) $ do
        funcs <- loadMapiFuncs dllname dll
        return (funcs, dll)

-- |
withMapiFuncs :: [String] -> (MapiFuncs -> IO a) -> IO a
withMapiFuncs dlls act = bracket load free (act . fst)
    where
        loadOne l = case l of
            []  -> fail $ "withMapiFuncs: Failed to load DLLs: " ++ show dlls
            x:y -> handle (const $ loadOne y) (loadMapiDll x)
        load = loadOne dlls
        free = freeLibrary . snd

-- |
loadMapi :: [String] -> IO MapiLoaded
loadMapi dlls = do
    (f,m) <- loadOne dlls
    m' <- newForeignPtr c_FreeLibraryFinaliser m
    return (f,m')
    where
        loadOne l = case l of
            []  -> fail $ "loadMapi: Failed to load any of DLLs: " ++ show dlls
            x:y -> handle (const $ loadOne y) (loadMapiDll x)

-- |
withMapiLoaded :: MapiLoaded -> (MapiFuncs -> IO a) -> IO a
withMapiLoaded (f,m) act = finally (act f) (touchForeignPtr m)

maybeHWND :: Maybe HWND -> ULONG
maybeHWND = maybe 0 (fromIntegral . flip minusPtr nullPtr)

-- | Create Simple MAPI-session by logon
mapiLogon
    :: MapiFuncs    -- ^ Functions loaded from MAPI DLL
    -> Maybe HWND   -- ^ Parent window, used for modal logon dialog
    -> Maybe String -- ^ Session
    -> Maybe String -- ^ Password
    -> MapiFlag     -- ^ None, one or many flags: FORCE_DOWNLOAD, NEW_SESSION, LOGON_UI, PASSWORD_UI
    -> IO LHANDLE
mapiLogon f hwnd ses pw flags =
    maybeWith withCString ses   $ \ses  ->
    maybeWith withCString pw    $ \pw   ->
    alloca                      $ \out  -> do
        mapiFail "MAPILogon: " $ mapifLogon
            f (maybeHWND hwnd) 
            ses pw flags 0 out
        peek out

-- | End Simple MAPI-session
mapiLogoff
    :: MapiFuncs
    -> LHANDLE
    -> Maybe HWND
    -> IO ()
mapiLogoff f ses hwnd
    = mapiFail_ "MAPILogoff"
        $ mapifLogoff f ses (maybeHWND hwnd) 0 0


data RecipientClass = RcOriginal | RcTo | RcCc | RcBcc
    deriving (Show, Eq, Ord, Enum)

rcToULONG :: RecipientClass -> ULONG
rcToULONG = fromIntegral . fromEnum

uLONGToRc :: ULONG -> RecipientClass
uLONGToRc = toEnum . fromIntegral


data Recipient
    = RecipResolve (Maybe HWND) MapiFlag String (Maybe Recipient)
    | Recip String String
    deriving (Show)
type Recipients = [(RecipientClass, Recipient)]

simpleRecip :: String -> Recipient
simpleRecip s = RecipResolve Nothing 0 s $ Just $ Recip s s

withRecipient
    :: MapiFuncs
    -> LHANDLE
    -> RecipientClass
    -> Recipient
    -> (Ptr MapiRecipDesc -> IO a)
    -> IO a
withRecipient f ses rcls rec act = resolve "" rec
    where
        a buf = do
            ((\hsc_ptr -> pokeByteOff hsc_ptr 4)) buf (rcToULONG rcls)
{-# LINE 240 "System\Win32\SimpleMAPI.hsc" #-}
            act buf
        resolve err rc = case rc of
            Recip name addr ->
                withCString name $ \name ->
                withCString addr $ \addr ->
                allocaBytes ((24)) $ \buf -> do
{-# LINE 246 "System\Win32\SimpleMAPI.hsc" #-}
                    ((\hsc_ptr -> pokeByteOff hsc_ptr 0))   buf (0::ULONG)
{-# LINE 247 "System\Win32\SimpleMAPI.hsc" #-}
                    ((\hsc_ptr -> pokeByteOff hsc_ptr 8))     buf name
{-# LINE 248 "System\Win32\SimpleMAPI.hsc" #-}
                    ((\hsc_ptr -> pokeByteOff hsc_ptr 12))  buf addr
{-# LINE 249 "System\Win32\SimpleMAPI.hsc" #-}
                    ((\hsc_ptr -> pokeByteOff hsc_ptr 16))    buf (0::ULONG)
{-# LINE 250 "System\Win32\SimpleMAPI.hsc" #-}
                    ((\hsc_ptr -> pokeByteOff hsc_ptr 20))    buf nullPtr
{-# LINE 251 "System\Win32\SimpleMAPI.hsc" #-}
                    a buf
            RecipResolve hwnd flag name fallback -> do
                res <-  alloca          $ \res ->
                        withCString name $ \name' -> do
                            errn <- mapifResolveName
                                    f ses (maybeHWND hwnd) name' flag 0 res
                            if errn==(0)
{-# LINE 258 "System\Win32\SimpleMAPI.hsc" #-}
                                then do
                                    buf <- peek res
                                    v <- a buf
                                    mapifFreeBuffer f $ castPtr buf
                                    return $ Right v
                                else return $ Left
                                    $ err ++ ", "
                                    ++ name ++ ":" ++ mapiErrorString errn
                case res of
                    Left e -> case fallback of
                        Nothing -> fail $ "Failed to resolve any of the recipients: " ++ e
                        Just x  -> resolve e x
                    Right x -> return x

withRecipients
    :: MapiFuncs
    -> LHANDLE
    -> Recipients
    -> (Int -> Ptr MapiRecipDesc -> IO a)
    -> IO a
withRecipients f ses rec act = w [] rec
    where
        w res [] = allocaBytes (length res*rs) $ \buf -> do
            mapM_ (write buf) $ zip [0..] $ reverse res
            act (length res) buf
        w res ((c,r):y) = withRecipient f ses c r $ \x -> w (x:res) y
        rs = ((24))
{-# LINE 285 "System\Win32\SimpleMAPI.hsc" #-}
        write buf (off,src) = do
            let buf' = plusPtr buf (off*rs)
            copyBytes buf' src rs

data FileTag = FileTag
    { ftTag         :: Maybe String -- ^ mime
    , ftEncoding    :: Maybe String
    } deriving (Show)

defFileTag :: FileTag
defFileTag = FileTag Nothing Nothing

withFileTag :: FileTag -> (Ptr FileTag -> IO a) -> IO a
withFileTag ft act =
    allocaBytes ((20))  $ \buf ->
{-# LINE 300 "System\Win32\SimpleMAPI.hsc" #-}
    w (ftTag ft)                        $ \(tbuf,tsiz) ->
    w (ftEncoding ft)                   $ \(ebuf,esiz) -> do
        ((\hsc_ptr -> pokeByteOff hsc_ptr 0))  buf (0::ULONG)
{-# LINE 303 "System\Win32\SimpleMAPI.hsc" #-}
        ((\hsc_ptr -> pokeByteOff hsc_ptr 4))       buf tsiz
{-# LINE 304 "System\Win32\SimpleMAPI.hsc" #-}
        ((\hsc_ptr -> pokeByteOff hsc_ptr 8))       buf tbuf
{-# LINE 305 "System\Win32\SimpleMAPI.hsc" #-}
        ((\hsc_ptr -> pokeByteOff hsc_ptr 12))  buf esiz
{-# LINE 306 "System\Win32\SimpleMAPI.hsc" #-}
        ((\hsc_ptr -> pokeByteOff hsc_ptr 16))  buf ebuf
{-# LINE 307 "System\Win32\SimpleMAPI.hsc" #-}
        act buf
    where
        w v a = case v of
            Nothing -> a (nullPtr, 0)
            Just x  -> withCStringLen x a

data Attachment = Attachment
    { attFlag       :: MapiFlag
    , attPosition   :: Maybe ULONG
    , attPath       :: String
    , attName       :: Maybe String
    , attTag        :: Maybe FileTag
    } deriving (Show)
defAttachment :: Attachment
defAttachment = Attachment 0 Nothing "" Nothing Nothing
type Attachments = [Attachment]

withAttachments :: Attachments -> (Int -> Ptr Attachment -> IO a) -> IO a
withAttachments att act = allocaBytes (len*as) $ \buf -> write (act len buf) buf att
    where
        as = ((24))
{-# LINE 328 "System\Win32\SimpleMAPI.hsc" #-}
        len = length att
        write act _ [] = act
        write act buf (att:y) =
            withCString (attPath att) $ \path ->
            maybeWith withFileTag (attTag att) $ \tag ->
            withCString (maybe (attPath att) id (attName att)) $ \name -> do
                ((\hsc_ptr -> pokeByteOff hsc_ptr 0))    buf (0::ULONG)
{-# LINE 335 "System\Win32\SimpleMAPI.hsc" #-}
                ((\hsc_ptr -> pokeByteOff hsc_ptr 4))       buf (attFlag att)
{-# LINE 336 "System\Win32\SimpleMAPI.hsc" #-}
                ((\hsc_ptr -> pokeByteOff hsc_ptr 8))     buf (maybe 0xffffffff id $ attPosition att)
{-# LINE 337 "System\Win32\SimpleMAPI.hsc" #-}
                ((\hsc_ptr -> pokeByteOff hsc_ptr 12))  buf path
{-# LINE 338 "System\Win32\SimpleMAPI.hsc" #-}
                ((\hsc_ptr -> pokeByteOff hsc_ptr 16))  buf name
{-# LINE 339 "System\Win32\SimpleMAPI.hsc" #-}
                ((\hsc_ptr -> pokeByteOff hsc_ptr 20))    buf tag
{-# LINE 340 "System\Win32\SimpleMAPI.hsc" #-}
                write act (plusPtr buf as) y

data Message = Message
    { msgSubject    :: String
    , msgBody       :: String
    , msgType       :: Maybe String
    , msgDate       :: Maybe String
    , msgConversationId :: Maybe String
    , msgFlags      :: MapiFlag
    , msgFrom       :: Maybe Recipient
    , msgRecips     :: Recipients
    , msgAttachments :: Attachments
    } deriving (Show)

defMessage :: Message
defMessage = Message "" "" Nothing Nothing Nothing 0 Nothing [] []

withMessage
    :: MapiFuncs
    -> LHANDLE
    -> Message
    -> (Ptr Message -> IO a)
    -> IO a
withMessage f ses m act =
    withCString (msgSubject m)              $ \subject ->
    withCString (msgBody m)                 $ \body ->
    maybeWith withCString (msgType m)       $ \message_type ->
    maybeWith withCString (msgDate m)       $ \date ->
    maybeWith withCString (msgConversationId m) $ \conv_id ->
    withRecipients f ses (msgRecips m)          $ \rlen rbuf ->
    withAttachments (msgAttachments m)      $ \alen abuf ->
    maybeWith (withRecipient f ses RcOriginal) (msgFrom m) $ \from ->
    allocaBytes ((48))             $ \buf -> do
{-# LINE 373 "System\Win32\SimpleMAPI.hsc" #-}
        ((\hsc_ptr -> pokeByteOff hsc_ptr 0))     buf (0::ULONG)
{-# LINE 374 "System\Win32\SimpleMAPI.hsc" #-}
        ((\hsc_ptr -> pokeByteOff hsc_ptr 4))    buf subject
{-# LINE 375 "System\Win32\SimpleMAPI.hsc" #-}
        ((\hsc_ptr -> pokeByteOff hsc_ptr 8))   buf body
{-# LINE 376 "System\Win32\SimpleMAPI.hsc" #-}
        ((\hsc_ptr -> pokeByteOff hsc_ptr 12)) buf message_type
{-# LINE 377 "System\Win32\SimpleMAPI.hsc" #-}
        ((\hsc_ptr -> pokeByteOff hsc_ptr 16)) buf date
{-# LINE 378 "System\Win32\SimpleMAPI.hsc" #-}
        ((\hsc_ptr -> pokeByteOff hsc_ptr 20)) buf conv_id
{-# LINE 379 "System\Win32\SimpleMAPI.hsc" #-}
        ((\hsc_ptr -> pokeByteOff hsc_ptr 24))        buf (msgFlags m)
{-# LINE 380 "System\Win32\SimpleMAPI.hsc" #-}
        ((\hsc_ptr -> pokeByteOff hsc_ptr 28))   buf from
{-# LINE 381 "System\Win32\SimpleMAPI.hsc" #-}
        ((\hsc_ptr -> pokeByteOff hsc_ptr 32))    buf (fromIntegral rlen :: ULONG)
{-# LINE 382 "System\Win32\SimpleMAPI.hsc" #-}
        ((\hsc_ptr -> pokeByteOff hsc_ptr 36))       buf rbuf
{-# LINE 383 "System\Win32\SimpleMAPI.hsc" #-}
        ((\hsc_ptr -> pokeByteOff hsc_ptr 40))     buf alen
{-# LINE 384 "System\Win32\SimpleMAPI.hsc" #-}
        ((\hsc_ptr -> pokeByteOff hsc_ptr 44))        buf abuf
{-# LINE 385 "System\Win32\SimpleMAPI.hsc" #-}
        act buf

mapiSendMail :: MapiFuncs -> LHANDLE -> Maybe HWND -> Message -> MapiFlag -> IO ()
mapiSendMail f ses hwnd msg flag = withMessage f ses msg $ \msg ->
    mapiFail_ "MAPISendMail" $ mapifSendMail f ses (maybeHWND hwnd) msg flag 0
