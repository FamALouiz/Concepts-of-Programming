my_split(C, L, O):-
    my_split_helper(C, L, [], [], O).

my_split_helper(_, [], Total, C, L):- length(C, Len), Len >= 1, append(Total, [C], L), !.
my_split_helper(_, [], Total, _, Total):- !.

my_split_helper(H, [H|T], CumTotal, CumCurr, O):-
    append(CumTotal, [CumCurr], CumTotalNew),
    my_split_helper(H, T, CumTotalNew, [], O), !.

my_split_helper(A, [H|T], CumTotal, CumCurr, O):-
    append(CumCurr, [H], CumCurrNew),
    my_split_helper(A, T, CumTotal, CumCurrNew, O), !.