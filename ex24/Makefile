# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 23:03:16 by gissao-m          #+#    #+#              #
#    Updated: 2022/05/26 04:01:54 by gissao-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = ./includes/libft.h 

SRCS = ./srcs/ft_putchar.c \
		./srcs/ft_putstr.c \
		./srcs/ft_strcmp.c \
		./srcs/ft_strlen.c \
		./srcs/ft_swap.c

CFLAGS =  -Wall -Wextra -Werror

CC = gcc

OBJS = ${SRCS:.c=.o}

all:        $(NAME)

$(NAME):    $(OBJS) $(BONUS_O)
			ar -rcs $(NAME) $(OBJS)

.c.o:
			$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

clean:

	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all