module Paths_xhtml (
	version,
	getBinDir, getLibDir, getDataDir, getLibexecDir,
	getDataFileName
	) where

import Data.Version

version = Version {versionBranch = [2006,9,13], versionTags = []}

bindir     = "D:\\msys\\1.0\\local\\Haskell\\bin"
libdir     = "D:\\msys\\1.0\\local\\Haskell\\hugs\\packages\\xhtml"
datadir    = "C:\\Program Files\\Common Files\\xhtml-2006.9.13"
libexecdir = "D:\\msys\\1.0\\local\\xhtml-2006.9.13"

getBinDir, getLibDir, getDataDir, getLibexecDir :: IO FilePath
getBinDir = return bindir
getLibDir = return libdir
getDataDir = return datadir
getLibexecDir = return libexecdir

getDataFileName :: FilePath -> IO FilePath
getDataFileName name = return (datadir ++ "\\" ++ name)
