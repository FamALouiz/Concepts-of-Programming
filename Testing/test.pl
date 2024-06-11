:- use_module(library(clpfd)).

s(0). 
s(X):- 
    X = s(X1),
    s(X1).

display(0, 0).
display(X, Y):-
    X = s(X1),
    display(X1, Y1),
    Y is 1 + Y1.

issum(0,Y,Y).
issum(X,Y,Z):-
    X = s(X1),
    Z = s(Z1),
    issum(X1,Y,Z1).
