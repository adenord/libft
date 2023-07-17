make re
make clean
gcc -Wall -Wextra -Werror optimus_tester.c libft.a -I includes && ./a.out
