memCount(_, [], 0).

memCount(L, H, 0):- L \= H, \+ is_list(H).

memCount(H, [H|T], N):-
    memCount(H, T, N1),
    N is N1 + 1.

memCount(L, [H|T], N):-
    L \= H,
    memCount(L, H, N1),
    memCount(L, T, N2), 
    N is N1 + N2.

                        