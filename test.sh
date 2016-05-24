#!/bin/sh

printf "\033[34;1mShould return 0 (or nothing)\033[0m\n"
./push_swap 4 5 12 25 89

printf "\033[34;1mShould be done in 2 operations (okay for 3)\033[0m\n"
./push_swap 3 2 1

printf "\033[34;1mShould be done in only one swap\033[0m\n"
./push_swap 2 1 3

printf "\033[34;1mShould be done in less than 8 operations (5 is good)\033[0m\n"
./push_swap 4 6 10 12 19 25 36 29

printf "\033[34;1mShould be done between 5 and 20 operations\033[0m\n"
./push_swap 100 1000 10 100000 10000

printf "\033[34;1mShould be done between 5 and 20 operations too\033[0m\n"
./push_swap 12 25 5 154 89

printf "\033[34;1mShould return nothing (or empty line, it's okay)\033[0m\n"
./push_swap

printf "\033[34;1mShould return Error (non digit arguments)\033[0m\n"
./push_swap 56 76 sig 67 62
./push_swap 56 76 sig 67 62
./push_swap sig 56 121 45 5
./push_swap s

printf "\033[34;1mShould return Error (double)\033[0m\n"
./push_swap 15 15
./push_swap 45 12 57 52 33 33
./push_swap 45 12 57 52 33 45

printf "\033[34;1mShould return Error (bigger than integer)\033[0m\n"
./push_swap 2147483648
./push_swap 29999999999
./push_swap -2147483649
./push_swap -29999999999

printf "\033[34;1mShould return no operations\033[0m\n"
./push_swap 2

printf "\033[34;1mCheck by yourself if the operations solve this : 5 6 2 9 1 3\033[0m\n"
./push_swap 5 6 2 9 1 3

printf "\033[34;1mTests with negatives and positives\033[0m\n"
./push_swap 2 -5 26 -7888 -998 564 12

printf "\033[34;1mTests with only negatives\033[0m\n"
./push_swap -2 -5 -26 -7888 -998 -564 -12

#printf "\033[34;1mWhat is happening with a lot of parameters?\033[0m\n"
#./push_swap `ruby -e "puts (-1000..1000).to_a.shuffle.join(' ')"`

#printf "\033[34;1mWhat is happening with even more parameters?\033[0m\n"
#./push_swap `ruby -e "puts (-5000..5000).to_a.reverse.insert(rand(8000) + 1000, 10001).join(' ')"`
