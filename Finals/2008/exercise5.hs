riffle l = riffleHelper (filter even l) (filter odd l)

riffleHelper [] _ = []
riffleHelper _ [] = []
riffleHelper (x1:xs1) (x2:xs2) = [x1] ++ [x2] ++ riffleHelper xs1 xs2