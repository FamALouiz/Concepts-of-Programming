part l n = partHelp l [] n 

partHelp l c 0 = (c, l)

partHelp (x:xs) c n = partHelp xs (c ++ [x]) (n - 1)