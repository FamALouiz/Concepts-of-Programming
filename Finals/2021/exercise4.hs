foldl2 f b [] = b

foldl2 f b [x] = f b x

foldl2 f b (x:xs) = f (foldl2 f b xs) x