inits [] = [[]]

inits l = (inits (init l)) ++ [l]