insert(E, [], [E]).

insert(E, [H | T], [E | [H | T]]):- 
    E < H.

insert(E, [H | T], [H | T1]):-
    E > H, 
    insert(E, T, T1).

sorted([X], [X]).

sorted([H | T], R):-
    sorted(T, R1),
    insert(H, R1, R).
