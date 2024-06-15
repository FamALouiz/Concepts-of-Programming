rotabc l = map (check) l 
    where check = (\x -> if x == 'a' then 'b'
                        else if x == 'b' then 'c'
                        else if x == 'c' then 'a'
                        else x)