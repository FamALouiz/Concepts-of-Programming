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

bind_item(false).
bind_item(true).

bind([]).
bind([H|T]):-
    bind_item(H),
    bind(T).

writeVar([]).
writeVar([H|T]):-
    write(H),
    write("    "),
    writeVar(T).

writeExp(Exp):-
    Exp, 
    write(true),
    nl.

writeExp(Exp):-
    \+ Exp, 
    write(false), 
    nl.


table(L, Exp):- 
    bind(L),
    writeVar(L),
    writeExp(Exp), false. 
