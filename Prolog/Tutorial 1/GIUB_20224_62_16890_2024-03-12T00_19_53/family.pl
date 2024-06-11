% parent(X,Y) means: X is the
% father or the mother of Y
parent(lila, alex).
parent(martin, alex).   
parent(lina, fam).
parent(alex, fam).
parent(alex, julia).
parent(alex, rosa).
parent(lina,julia).
parent(lina,rosa).
parent(romeo,peter).
parent(julia,peter).
parent(rosa,silvia).
parent(oscar,ida).
parent(eva,ida).
parent(eva,bruno).
parent(peter,bruno).
parent(peter,georg).
parent(peter,irma).
parent(ruth,georg).
parent(ruth,irma).
parent(silvia,otto).
parent(silvia,pascal).
parent(irma,olga).
parent(irma,jean).
parent(otto,olga).
parent(otto,jean).
parent(jean,tina).
parent(marie,tina).


% male(X) means:
% X is a man

male(alex).
male(romeo).
male(oscar).
male(peter).
male(bruno).
male(georg).
male(otto).
male(pascal).
male(jean).
male(martin).
male(fam).


% husband(X,Y) means:
% X is the husband of Y

husband(alex,lina).
husband(romeo,julia).
husband(oscar,eva).
husband(peter,ruth).
husband(otto,irma).
husband(jean,marie).
female(A):-
	 \+ male(A).
grandparent(A, B):-
	parent(Y, B), 
	parent(A, Y).
grandfather(A, B):-
	grandparent(A, B), 
	male(A).
grandmother(A, B):-
	grandparent(A, B), 
	female(A).
siblings(A, B):-
	parent(Y, A), 
	parent(Y, B), 
	(
		husband(Y, Z);
		husband(Z, Y)), 
	parent(Z, A), 
	parent(Z, B).
brother(A, B):-
	siblings(A, B), 
	male(A).
uncle(A, B):-
	parent(Y, A), 
	parent(Z, Y), 
	parent(Z, B), 
	male(B).
sister(A, B):-
	siblings(A, B), 
	female(A).
has_son(A):-
	parent(A, _).
married(A, B):-
	husband(A, B);
	husband(B, A).
cousins(A, B):-
	uncle(Y, A), 
	parent(Y, B).
no_children(A):-
	 \+ parent(A, _).
brother_in_law(A, B):-
	(
		husband(A, Y), 
		brother(B, Y));
	(
		husband(Y, A), 
		brother(B, Y)).