
bubble (x:xs) = (a, remove a (x:xs)) where a = min2 (x:xs) x

min2 [] a = a 
min2 (x:xs) a = if x < a then min2 xs x 
    else min2 xs a

remove _ [] = [] 
remove a (x:xs) = if a == x then xs else
        [x] ++ remove a xs