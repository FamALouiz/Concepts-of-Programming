and(A, B):-
    A,
    B.

or(A, _):-
    A, !.

or(_, B):-
    B, !.

nand(A,B):-
    \+ and(A,B).

nor(A,B):-
    \+ or(A,B).

table(L, Exp):- 
    member(Mem, L),
    bind(Mem), 
    do(L, Exp). 

do(L, _):- 
    member(Mem, L),
    write(Mem), 
    write(" "), 
    false.

do(_,Exp):-
    Exp, 
    write(true),
    nl.

do(_,Exp):-
    \+ Exp, 
    write(false), 
    nl.
