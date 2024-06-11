double x = x + x

quad x = double (double x)

abs x | x > 0 = x
      | otherwise = -x

fac n = if n == 0 then 1 else fac (n - 1) * n

sumAll [] = 0

sumAll (h:t) = h + sumAll t

isPalindrom [] = True
isPalindrom [_] = True

isPalindrom (h:t) = if h == last t then isPalindrom (init t) else False

unzip2 [] = ([], [])
unzip2 ((a, b):t) =  (a:a1, b:b1) where (a1, b1) = unzip2 t 

type Point = (Int, Int) 


getX :: Point -> Int
getX (x, y) = x

type Point2 a = (a, a)

getY :: Point2 a -> a
getY (x, y) = y


data Bt a = Nil | Const a (Bt a) (Bt a) deriving (Show, Eq)


printLeft (Const x left right) = if left == Nil then x else x + printLeft left

map2 f l = [f x | x <- l]

filter2 f [] = []
filter2 f (h:t) |  f h = h : filter2 f t
                |  otherwise = filter2 f t

filter3 f l = [x | x <- l, f x]