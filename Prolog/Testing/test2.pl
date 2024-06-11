num(A,B,L):- setof(X-Y, (numlist(A,B,NL), member(X, NL), member(Y,NL), X > Y, Y =\= 1, 0 =:= mod(X,Y)), L).
