assign_quiz(quiz(_, Day, Slot, Count), [H | _], TA):-
    H = day(Day, Empty),
    Slot1 is Slot - 1,
    nth0(Slot1, Empty, X),
    length(X, L), 
    L >= Count,
    comb(Count, X, TA). 

assign_quiz(quiz(_, Day, Slot, Count), [H | _], TA):-
    Count > 1,
    H = day(Day, Empty),
    Slot1 is Slot - 1,
    nth0(Slot1, Empty, X),
    length(X, L), 
    L >= Count,
    reverse(X, X1), 
    comb(Count, X1, TA).

assign_quiz(quiz(Sub, Day, Slot, Count), [_ | T], TA):-
    assign_quiz(quiz(Sub, Day, Slot, Count), T, TA).


comb(0,_,[]).

comb(N,[X|T],[X|Comb]) :-
    N>0,    
    N1 is N-1,
    comb(N1,T,Comb).

comb(N,[_|T],Comb) :-
    N>0,
    comb(N,T,Comb).

% assign_quiz(quiz(csen403, sun, 5, 3),[day(sat, [[s, m], [m], [m], [m], [s, m]]),day(sun, [[s], [s, h, m], [], [s, m], [s, h, m]]),day(mon, [[s, m], [s, h, m], [s, m], [s, m], [s, h, m]]),day(tue, [[h, m], [h], [h], [h, m], [h]]),day(wed, [[s, h, m], [s, h, m], [s, h], [s, h], [s, h, m]]),day(thu, [[s, h], [h], [h], [s, h], [s, h]])],AssignedTAs).

