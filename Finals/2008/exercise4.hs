data Formula = Constant Int | Variable String | Sum Formula Formula | Product Formula Formula

sumAtoms :: Formula -> Int

sumAtoms (Sum a b) = sumAtoms a + sumAtoms b
sumAtoms (Product a b) = sumAtoms a + sumAtoms b
sumAtoms (Variable a) = 1
sumAtoms (Constant a) = 1