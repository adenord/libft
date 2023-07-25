SRCS1 = $(wildcard ./srcs/part1/*.c)
SRCS2 = $(wildcard ./srcs/part2/*.c)
SRCS_BONUS = $(wildcard ./srcs/bonus/*.c)
SRCS_ADDITIONAL = $(wildcard ./srcs/additional_fct/*.c)
SRCS_M = $(SRCS1) $(SRCS2)
SRCS_M_BONUS = $(SRCS1) $(SRCS2) $(SRCS_BONUS)
SRCS_M_BONUS_ADDITIONAL = $(SRCS1) $(SRCS2) $(SRCS_BONUS) $(SRCS_ADDITIONAL)
OBJS_M = $(SRCS_M:.c=.o)
OBJS_M_BONUS = $(SRCS_M_BONUS:.c=.o)
OBJS_M_BONUS_ADDITIONAL = $(SRCS_M_BONUS_ADDITIONAL:.c=.o)
NAME_LIB = libft.a
GCC = gcc -Wall -Wextra -Werror -I includes/

all : $(NAME_LIB)

.c.o :
	$(GCC) -c $< -o $(<:.c=.o)

$(NAME_LIB) : fclean $(OBJS_M)
	ar rcs $@ $(OBJS_M)

bonus : fclean $(OBJS_M_BONUS)
	ar rcs $(NAME_LIB) $(OBJS_M_BONUS)

additional : fclean $(OBJS_M_BONUS_ADDITIONAL)
	ar rcs $(NAME_LIB) $(OBJS_M_BONUS_ADDITIONAL)

clean :
	rm -rf $(OBJS_M_BONUS_ADDITIONAL)

fclean : clean
	rm -rf $(NAME_LIB)

re : fclean all
