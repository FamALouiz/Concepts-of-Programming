
pairwise f l = if (length l) `mod` 2 == 0 then pairwiseH f l else []

pairwiseH f [] = [] 
pairwiseH f (x1:x2:xs) = (f x1 x2) : pairwise f xs