member2(H, [H|_]).

member2(X, [_|T]):-
    member2(X, T).

common([], _, 0).

common([H1|T1], L2, C):-
    member2(H1, L2),
    common(T1, L2, C1),
    C is C1 + 1, !.

common([_|T1], L2, C):-
    common(T1, L2, C).