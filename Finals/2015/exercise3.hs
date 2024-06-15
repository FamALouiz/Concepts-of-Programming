isFaceCard c = foldr (||) False (map (==c) ['A', 'K', 'Q','J'])

isDigit x = x >= '0' && x <= '9'

isCard x = isFaceCard x || (isDigit x && x /= '1')

f [] = True

f (x:xs) | isCard x = isFaceCard x && (f xs)
         | otherwise = f xs

g l = foldr (&&) True (map isFaceCard (filter isCard l))
