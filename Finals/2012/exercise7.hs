data Instruction = PUSH Int | 
                    ADD |
                    SUB |
                    MUL deriving Show

type Stack = [Int]
type Program = [Instruction]

calc [] stack = stack 

calc (PUSH a:xs) [s1] = calc xs (a:[s1])
calc (x:xs) [s1] = calc xs [s1]

calc (PUSH a:xs) stack = calc xs ([a] ++ stack)
calc (ADD:xs) (s1:s2:ss) = calc xs ((s1 + s2):ss)
calc (SUB:xs) (s1:s2:ss) = calc xs ((s1 - s2):ss)
calc (MUL:xs) (s1:s2:ss) = calc xs ((s1 * s2):ss)
