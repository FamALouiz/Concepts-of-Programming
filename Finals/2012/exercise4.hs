
sublist [] _ = True
sublist _ [] = False

sublist (x1:xs1) (x2:xs2) | x1 == x2 = sublist xs1 xs2
                          | otherwise = sublist (x1:xs1) xs2