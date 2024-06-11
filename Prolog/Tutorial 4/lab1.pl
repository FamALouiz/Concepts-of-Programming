len([], 0).

len([_|T], N):-
    len(T, N1),
    N is 1 + N1.

len2(L, N):- len2(L, 0,N).

len2([], Acc, Acc).

len2([_ | T], Acc, N):- 
    NewAcc is Acc + 1,
    len2(T, NewAcc, N).


