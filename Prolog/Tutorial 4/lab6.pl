perm([], []).

perm(Y, L):-    
    Y = [H | T],
    perm(T, P),
    insert(H, P, L).
    
insert(X, L, [X|L]).
insert(X, [Y|L], [Y|L1]):- insert(X,L,L1).

app(X, [], [X]).
app(L1, L2, L):- L1= [H|T], L=[H|T1], app(T, L2, T1).