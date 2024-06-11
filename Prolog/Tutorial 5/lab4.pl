same_l([]).
same_l([_]).

same_l([H | T]):-
    is_list(H),
    T = [H1 | _],
    is_list(H1),
    length(H, Length),
    length(H1, Length),
    same_l(T), !.

same_l([H | T]):-
    \+ is_list(H), 
    T = [H1 | _], 
    \+ is_list(H1),
    same_l(T).