teenager(13).
teenager(14).
teenager(15).
teenager(16).
teenager(17).
teenager(18).
teenager(19).
teenager(20).

findAge(X,Y,Z):-
    teenager(X), 
    teenager(Y), 
    teenager(Z),
    X \= Y,
    Y \= Z, 
    Z  \= X,
    Check is X * Y * Z,
    Check = 4590.
