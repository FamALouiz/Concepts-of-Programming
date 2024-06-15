isDigit c = c >= '0' && c <= '9'

f x (a, b) | isDigit x = ([x] ++ a, b)
           | otherwise = (a,[x] ++ b)

separate s = foldr f ([],[]) s