f [] = error "Cant do that"
f [x] = True

f (x1:x2:xs) = f (x2:xs) && (x2 >= 2 * x1)
