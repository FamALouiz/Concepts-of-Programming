module Paths_fgl (
	version,
	getBinDir, getLibDir, getDataDir, getLibexecDir,
	getDataFileName
	) where

import Data.Version

version = Version {versionBranch = [5,3], versionTags = []}

bindir     = "D:\\msys\\1.0\\local\\Haskell\\bin"
libdir     = "D:\\msys\\1.0\\local\\Haskell\\hugs\\packages\\fgl"
datadir    = "C:\\Program Files\\Common Files\\fgl-5.3"
libexecdir = "D:\\msys\\1.0\\local\\fgl-5.3"

getBinDir, getLibDir, getDataDir, getLibexecDir :: IO FilePath
getBinDir = return bindir
getLibDir = return libdir
getDataDir = return datadir
getLibexecDir = return libexecdir

getDataFileName :: FilePath -> IO FilePath
getDataFileName name = return (datadir ++ "\\" ++ name)
