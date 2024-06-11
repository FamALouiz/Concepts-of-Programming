reverse([], []).

reverse([H | T], R):-
    reverse(T, T1), 
    append(T1, [H], R).