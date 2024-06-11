compress(L, R):-
    compress(L, [], R).

compress([], X, X).

compress([H | T], X, R):-
    \+ member(H, X), 
    append(X, [H], X1), 
    compress(T, X1, R), !.

compress([_ | T], X, R):-
    compress(T, X, R).