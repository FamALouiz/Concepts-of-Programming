f l1 l2 = foldr (+) 0 (map (\ (a, b) -> a) (filter check (zip l1 l2)))
    where check = (\ (a, b) -> a `mod` b == 0)

g [] _ = 0 
g _ [] = 0

g (x1:xs1) (x2:xs2) = if x1 `mod` x2 == 0 then x1 + g xs1 xs2
    else g xs1 xs2