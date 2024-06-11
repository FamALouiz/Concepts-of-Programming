mystery x y 0 = x ++ y
mystery (x:xs) (y:ys) n = mystery xs ys (n-1)