check_seq([]).

check_seq([0, 1]).

check_seq([1, 0]).

check_seq([H | T]):-
    ((H = 1) ; (H = 0)),
    (
        last(T, 0); 
        last(T, 1)
    ),
    (
        check_seq(T)
    ).