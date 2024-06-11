pack([], []).
pack([X], [X]).

pack([H1 | [H2 | T]], R):-
    H1 = H2,
    pack([H1 | T], R1),
    R = [H2 | R1].

pack([H1 | [H2 | T]], R):-
    H1 \= H2,
    pack([H2 | T], R1),
    R = [H1 | R1].