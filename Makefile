# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/26 09:58:12 by adenord           #+#    #+#              #
#    Updated: 2023/07/26 10:13:21 by adenord          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS1 =./srcs/part1/ft_atoi.c ./srcs/part1/ft_bzero.c ./srcs/part1/ft_calloc.c \
./srcs/part1/ft_isalnum.c ./srcs/part1/ft_isalpha.c ./srcs/part1/ft_isascii.c \
./srcs/part1/ft_isdigit.c ./srcs/part1/ft_isprint.c ./srcs/part1/ft_memchr.c \
./srcs/part1/ft_memcmp.c ./srcs/part1/ft_memcpy.c ./srcs/part1/ft_memmove.c \
./srcs/part1/ft_memset.c ./srcs/part1/ft_strchr.c ./srcs/part1/ft_strdup.c \
./srcs/part1/ft_strlcat.c ./srcs/part1/ft_strlcpy.c ./srcs/part1/ft_strlen.c \
./srcs/part1/ft_strncmp.c ./srcs/part1/ft_strnstr.c ./srcs/part1/ft_strrchr.c \
./srcs/part1/ft_tolower.c ./srcs/part1/ft_toupper.c


SRCS2 = ./srcs/part2/ft_itoa.c ./srcs/part2/ft_putchar_fd.c \
./srcs/part2/ft_putendl_fd.c ./srcs/part2/ft_putnbr_fd.c \
./srcs/part2/ft_putstr_fd.c ./srcs/part2/ft_split.c ./srcs/part2/ft_striteri.c \
./srcs/part2/ft_strjoin.c ./srcs/part2/ft_strmapi.c ./srcs/part2/ft_strtrim.c \
./srcs/part2/ft_substr.c


SRCS_BONUS = ./srcs/bonus/ft_lstadd_back.c ./srcs/bonus/ft_lstadd_front.c \
./srcs/bonus/ft_lstclear.c ./srcs/bonus/ft_lstdelone.c \
./srcs/bonus/ft_lstiter.c ./srcs/bonus/ft_lstlast.c ./srcs/bonus/ft_lstmap.c \
./srcs/bonus/ft_lstnew.c ./srcs/bonus/ft_lstsize.c


SRCS_ADDITIONAL = ./srcs/additional_fct/ft_memccpy.c \
./srcs/additional_fct/ft_strcat.c ./srcs/additional_fct/ft_strcmp.c \
./srcs/additional_fct/ft_strcpy.c ./srcs/additional_fct/ft_strncat.c \
./srcs/additional_fct/ft_strncpy.c ./srcs/additional_fct/ft_strstr.c


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
