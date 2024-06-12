applytwice f x = f (f x)

map2 f l = [f x | x <- l]

mul2 [] = []
mul2 (h:t) = (2 * h) : mul2 t

filter2 f l = [x | x <- l, f x]

all2 f l = foldr (&&) True (map f l)

any2 f l = foldr (||) True (map f l)

foldr2 _ c [] = c
foldr2 f c (x:xs) =  f x (foldr2 f c xs)