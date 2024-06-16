minList([H|T], Min, Idx):- 
    minListHelper([H|T], H, Min, 0, Idx, 0).

minListHelper([], Min, Min, Idx, Idx, _).

minListHelper([H|T], CurrMin, TotalMin, _, Idx, Counter):- 
    H < CurrMin,
    Counter_New is Counter + 1,
    minListHelper(T, H, TotalMin, Counter, Idx, Counter_New), !.

minListHelper([_|T], Min, TotalMin, CurrIdx, Idx, Counter):-
    Counter_new is Counter + 1,
    minListHelper(T, Min, TotalMin, CurrIdx, Idx, Counter_new).
    
selectionSort([], []).

selectionSort([H|T], Out):-
    minList([H|T], Min, Idx), 
    swap([Min|T], H, Idx, [_|New]),
    selectionSort(New, OutCurr),
    append([Min], OutCurr, Out).

swap([_|T], SwapValue, 0, NewList):-
    NewList = [SwapValue | T].

swap([H|T], SwapValue, Idx, NewList):-
    IdxNew is Idx - 1,
    swap(T, SwapValue, IdxNew, Res),
    NewList = [H|Res].
