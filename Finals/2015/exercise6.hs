data Proposition = Var String -- Atom
                        | F -- False
                        | T -- True
                        | Not Proposition -- Negation
                        | Proposition :|: Proposition -- Disjunction (OR)
                        | Proposition :&: Proposition -- Conjuction (AND)
                        deriving Show


isNorm (Var _) = True
isNorm F = True
isNorm T = True
isNorm (p :|: q) = isNorm p && isNorm q
isNorm (p :&: q) = isNorm p && isNorm q
isNorm (Not (Var _)) = True
isNorm (Not _) = False

norm p = if isNorm p then p else 
    normHelper p

normHelper (Not (Var a)) = Not (Var a)
normHelper (Not F) = T
normHelper (Not T) = F
normHelper (Not (Not p)) = normHelper p
normHelper (Not (p :|: q)) = ((normHelper (Not p))) :|: ((normHelper (Not q)))
normHelper (Not (p :&: q)) = ((normHelper (Not p))) :&: ((normHelper (Not q)))
normHelper ((p :|: q)) = ((normHelper (p))) :|: ((normHelper (q)))
normHelper ((p :|: q)) = ((normHelper (p))) :&: ((normHelper (q)))
normHelper p = p