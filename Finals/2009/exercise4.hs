addRec [] = True

addRec (x:xs) = x && addRec xs

addHigher = foldr (&&) True 

unequalRec [] = []
unequalRec ((x,y):xs) = if x == y then unequalRec xs
    else (x,y) : unequalRec xs

unequalHigher l = filter (\ (x,y) -> x /= y) l

