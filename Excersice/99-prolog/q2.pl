before_last(A, L):-
    before_last(A, L, T).

before_last(A, [H | T], T):-
    before_last(A, T, H).