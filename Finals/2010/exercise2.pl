take(C, L, M):-
    takeHelper(C, L, [], M).

takeHelper(0, _, L, L):- !.

takeHelper(_, [], L, L):- !.

takeHelper(C, [H|T], Cum, L):-
    append(Cum, [H], CumNew),
    CNew is C - 1,
    takeHelper(CNew, T, CumNew, L).

firstHalf(L, M):- 
    length(L, Length),
    Take is Length // 2, 
    firstHelper(L, Take, [], M).

firstHelper(_, 0, L, L):- !.

firstHelper([H|T], C, Cum, L):-
    append(Cum, [H], CumNew), 
    CNew is C - 1, 
    firstHelper(T, CNew, CumNew, L).