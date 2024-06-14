duplicate l = duplicateHelper l 1 1

duplicateHelper [] _ _ = []
duplicateHelper (x:xs) 0 c = duplicateHelper xs (c + 1) (c + 1)
duplicateHelper (x:xs) n c = [x] ++ duplicateHelper (x:xs) (n - 1) c