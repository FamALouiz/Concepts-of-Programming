sum_if([], _, _, 0).

sum_if([H | T], Min, Max, S):-
    H =< Max, 
    H >= Min,
    sum_if(T, Min, Max, S1), 
    S is S1 + H, !.

sum_if([_ | T], Min, Max, S):- 
    sum_if(T, Min, Max, S).