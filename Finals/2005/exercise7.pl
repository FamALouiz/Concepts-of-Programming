sort(L1, L2):-
    sortHelper(L1, [], L2).

sortHelper([], L2, L2).

sortHelper([H|T], Acc, L2):- 
    sortHelper(T, Acc, New),
    insert(H, New, L2).


    