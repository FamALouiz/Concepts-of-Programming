element(H, [H | T], 0).

element(X, [H | T], Z):-
    Z1 is Z - 1,
    element(X, T, Z1).
    