pack l = packHelper [] "" l

packHelper c curr [] = c ++ [curr] 
packHelper c curr [x] = c ++ [curr ++ [x]]
packHelper c curr (x1:x2:xs)  = if x1 == x2 then packHelper c (curr ++ [x1]) (x2:xs) else packHelper (c ++ [curr ++ [x1]]) "" (x2:xs)