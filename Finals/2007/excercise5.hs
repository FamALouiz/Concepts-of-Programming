bag [] = []

bag (x:xs) = [(x, 1 + length(filter (==x) (xs)))] ++ bag (dropWhile (==x) xs)