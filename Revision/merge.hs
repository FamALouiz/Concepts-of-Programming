firstHalf l = firstHalfHelper l (div (length l) 2)

firstHalfHelper _ 0 = []
firstHalfHelper (x:xs) c = x : firstHalfHelper xs (c - 1)

secondHalf l = secondHalfHelper l (div (length l) 2)

secondHalfHelper l 0 = l

secondHalfHelper (x:xs) c = secondHalfHelper xs (c - 1)


mergeSort [] = []
mergeSort [x] = [x] 

mergeSort l = combine (mergeSort (firstHalf l))  (mergeSort (secondHalf l))

combine l [] = l
combine [] l = l
combine (x1:xs1) (x2:xs2) = if x1 < x2 then [x1] ++ combine xs1 (x2:xs2)
    else [x2] ++ combine (x1:xs1) xs2


