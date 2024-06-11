my_flatten(L, R):-
    my_flatten(L, R, []).

my_flatten([], []).

my_flatten([], R, R).

my_flatten([H | [T]], R, Temp):-
    my_flatten(T, R, TempNew),
    append([H], TempNew, Temp).
