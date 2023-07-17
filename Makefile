SRCS = $(wildcard ./srcs/*.c)
OBJS = $(SRCS:.c=.o)
NAME_LIB = libft.a
GCC = gcc -Wall -Wextra -Werror -I includes/

all : $(NAME_LIB)

.c.o :
	$(GCC) -c $< -o $(<:.c=.o)

$(NAME_LIB) : $(OBJS)
	ar rc $@ $^

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME_LIB)

re : fclean all
