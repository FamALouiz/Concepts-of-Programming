changeFirst _ _ [] = []
changeFirst p val (x:xs) = if p x then val : xs 
    else [x] ++ changeFirst p val xs

-- (a -> Bool) -> a -> [a] -> [a]