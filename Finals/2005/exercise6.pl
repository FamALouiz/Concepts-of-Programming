repeats([], []).

repeats([H|T], Bs):-
    member(H, T),
    append([H], Pre, BsNoSet),
    repeats(T, Pre),
    setof(X, member(X,BsNoSet), Bs), !.

repeats([_|T], Bs):- 
    repeats(T, Bs).
