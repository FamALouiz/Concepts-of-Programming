is_prime(2):- !. 
is_prime(3):- !.

is_prime(A):-
    A > 3, 
    is_prime_helper(A, 2).

is_prime_helper(X,X) :- !.
is_prime_helper(A, Curr):-
    Rem is A mod Curr,
    Rem \= 0, 
    New_Curr is Curr + 1,
    is_prime_helper(A, New_Curr).

list_primes(Start, End, L):- 
    list_primes_helper(Start, End, [], L).

list_primes_helper(Start, Start, L, L):- !.
list_primes_helper(Start, End, Curr, L):-
    Start < End,
    is_prime(Start),
    append(Curr, [Start], New_Curr),
    New_start is Start + 1, 
    list_primes_helper(New_start, End, New_Curr, L), !.
list_primes_helper(Start, End, Curr, L):-
    Start < End,
    New_start is Start + 1, 
    list_primes_helper(New_start, End, Curr, L), !.