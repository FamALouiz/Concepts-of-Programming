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

bind(false).
bind(true).

table(A, B, Expression):-
    bind(A),
    bind(B),    
    do(A, B, Expression), false.

do(A, B, _):-
    write(A), 
    write(" "),
    write(B), 
    write(" "), false.

do(_,_,Exp):-
    Exp, 
    write(true),
    nl.

do(_,_,Exp):-
    \+ Exp, 
    write(false), 
    nl.