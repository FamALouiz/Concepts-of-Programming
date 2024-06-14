forsome f l = foldr (||) False (map f l)

forall _ [] = True 
forall f (x:xs) = (f x) && forall f xs