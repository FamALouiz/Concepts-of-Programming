union([], L, L). 

union([H1 | T1], [H2 | T2], L):-
    H1 = H2,
    union(T1, T2, L1),
    L = [H1 | L1].


union([H1 | T1], [H2 | T2], L):-
    \+ H1 = H2,
    union(T1, T2, L1),
    L = [H1 | [H2 | L1]].

inter([], _, []).

inter([H1 | T1], L2, L):-
    member(H1, L2), 
    inter(T1, L2, L1),
    L = [H1 | L1], !.

inter([H1 | T1], L2, L):-
    \+ member(H1, L2), 
    inter(T1, L2, L), !.