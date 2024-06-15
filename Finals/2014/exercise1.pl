addUpList(L, K):-
    addUpListHelper(L , 0, [], K).

addUpListHelper([], _, L, L).

addUpListHelper([H|T], CumNumber, CumList, K):-
    CumNumberNew is H + CumNumber,
    append(CumList, [CumNumberNew], Res),
    addUpListHelper(T, CumNumberNew, Res, K).