dupli([T], [T , T]).

dupli([H | T], Z):- dupli(T, Z1), Z = [H | [H | Z1]].