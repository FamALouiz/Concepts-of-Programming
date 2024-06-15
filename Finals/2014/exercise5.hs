data Genre = Nonfiction | Novel | Biography deriving (Eq, Show)
type Name = (String, String)
type Date = (Int, Int, Int) -- day, month, year
data Book = ABook Genre
            Name -- name of the author
            String -- title of the book
            Date -- date of publication
            Int -- number of pages
            deriving Show

genre (ABook g _ _ _ _) = g
title (ABook _ _ t _ _) = t
date (ABook _ _ _ d _) = d
pages (ABook _ _ _ _ p) = p
year b = y where (_, _, y) = date b

breakingNews = ABook Novel ("Schaetzing", "Frank") "Breaking News" (06, 03, 2014) 976
snowden = ABook Nonfiction ("Harding", "Luke") "The Snowden Files" (06, 02, 2014) 346
futureShock = ABook Nonfiction ("Toffler", "Alvin") "Future Shock" (01, 06, 1984) 576

publishedIn y l = filter check l where 
    check = (\ b -> (year b) == y)

totalPages l = foldr (+) 0 (map pages l)

titlesOf g l = map title (filter check l) where
    check = (\ b -> (genre b) == g)