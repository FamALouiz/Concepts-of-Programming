map2 _ [] [] = []
map2 f (x1:xs1) (x2:xs2) = (f x1 x2) : map2 f xs1 xs2