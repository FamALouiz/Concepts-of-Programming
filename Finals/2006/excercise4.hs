data Tree = Empty | Leaf Int | Node Tree Tree

depth Empty = 0 
depth (Leaf _) = 1 
depth (Node a b) = if (1 + depth a) > (1 + depth b) then 1 + depth a 
    else 1 + depth b