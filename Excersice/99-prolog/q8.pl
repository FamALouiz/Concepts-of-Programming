compress([], []).
compress([X], [X]).

compress([H1 | [H2 | T]], L):-
    H1 \= H2,
    compress([H2 | T], L1),
    L = [H1 | L1]. 

compress([H1 | [H2 | T]], L):-
    H1 = H2,
    compress([H1 | T], L).