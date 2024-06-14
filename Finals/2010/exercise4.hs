span2 f l = (takeWhile f l, dropWhile f l)

break f l = (takeWhile (\x -> not (f x)) l, dropWhile (\x -> not (f x)) l)