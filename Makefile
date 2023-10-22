# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/26 09:58:12 by adenord           #+#    #+#              #
#    Updated: 2023/10/22 17:42:02 by adenord          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS1 :=./srcs/part1/ft_atoi.c ./srcs/part1/ft_bzero.c ./srcs/part1/ft_calloc.c \
./srcs/part1/ft_isalnum.c ./srcs/part1/ft_isalpha.c ./srcs/part1/ft_isascii.c \
./srcs/part1/ft_isdigit.c ./srcs/part1/ft_isprint.c ./srcs/part1/ft_memchr.c \
./srcs/part1/ft_memcmp.c ./srcs/part1/ft_memcpy.c ./srcs/part1/ft_memmove.c \
./srcs/part1/ft_memset.c ./srcs/part1/ft_strchr.c ./srcs/part1/ft_strdup.c \
./srcs/part1/ft_strlcat.c ./srcs/part1/ft_strlcpy.c ./srcs/part1/ft_strlen.c \
./srcs/part1/ft_strncmp.c ./srcs/part1/ft_strnstr.c ./srcs/part1/ft_strrchr.c \
./srcs/part1/ft_tolower.c ./srcs/part1/ft_toupper.c


SRCS2 :=./srcs/part2/ft_itoa.c ./srcs/part2/ft_putchar_fd.c \
./srcs/part2/ft_putendl_fd.c ./srcs/part2/ft_putnbr_fd.c \
./srcs/part2/ft_putstr_fd.c ./srcs/part2/ft_split.c ./srcs/part2/ft_striteri.c \
./srcs/part2/ft_strjoin.c ./srcs/part2/ft_strmapi.c ./srcs/part2/ft_strtrim.c \
./srcs/part2/ft_substr.c


SRCS_BONUS :=./srcs/bonus/ft_lstadd_back.c ./srcs/bonus/ft_lstadd_front.c \
./srcs/bonus/ft_lstclear.c ./srcs/bonus/ft_lstdelone.c \
./srcs/bonus/ft_lstiter.c ./srcs/bonus/ft_lstlast.c ./srcs/bonus/ft_lstmap.c \
./srcs/bonus/ft_lstnew.c ./srcs/bonus/ft_lstsize.c


SRCS_ADDITIONAL :=./srcs/additional_fct/ft_memccpy.c \
./srcs/additional_fct/ft_strcat.c ./srcs/additional_fct/ft_strcmp.c \
./srcs/additional_fct/ft_strcpy.c ./srcs/additional_fct/ft_strncat.c \
./srcs/additional_fct/ft_strncpy.c ./srcs/additional_fct/ft_strstr.c

CC := gcc
CPPFLAGS := -I includes/
CFLAGS := -Wall -Wextra -Werror
ARFLAGS := rcs

OBJS := $(SRCS1:.c=.o) $(SRCS2:.c=.o)
OBJS_BONUS := $(OBJS) $(SRCS_BONUS:.c=.o)
OBJS_ADDITIONAL := $(OBJS_BONUS) $(SRCS_ADDITIONAL:.c=.o)

NAME = libft.a

all : $(NAME_LIB)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

bonus : $(OBJS_BONUS)
	$(AR) $(ARFLAGS) $(NAME) $^

additional : $(OBJS_ADDITIONAL)
	$(AR) $(ARFLAGS) $(NAME) $^

clean :
	$(RM) $(OBJS_ADDITIONAL)

fclean : clean
	$(RM) $(NAME)

re : fclean all
