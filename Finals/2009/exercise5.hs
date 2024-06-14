data Tree a = Leaf a | Node a (Tree a) (Tree a)

zipTree (Leaf a1) (Leaf a2) = Leaf ((a1, a2))
zipTree (Leaf a1) (Node a2 b c) = Leaf ((a1, a2))
zipTree (Node a2 b c) (Leaf a1) = Leaf ((a1, a2))

zipTree (Node a1 b1 c1) (Node a2 b2 c2) = (Node (a1, a2) (zipTree b1 b2) (zipTree c1 c2))

mapTree f (Leaf a) = Leaf (f a)
mapTree f (Node a b c) = Node (f a) (mapTree f b) (mapTree f c)

foldrTree f b (Leaf a) = b
foldrTree f e (Node a b c) = f x (f (foldrTree f e b) (foldrTree f e c))