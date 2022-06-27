# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 23:03:16 by gissao-m          #+#    #+#              #
#    Updated: 2022/05/27 17:20:21 by gissao-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a # o arquivo sairá com este nome, ao ser comp.

HEADER = ./includes/libft.h #identificando onde estará o header
#contra barra pra criar nova linha nao precisa no fim.
SRCS = ./srcs/ft_putchar.c \
		./srcs/ft_putstr.c \
		./srcs/ft_strcmp.c \
		./srcs/ft_strlen.c \
		./srcs/ft_swap.c

CFLAGS =  -Wall -Wextra -Werror

CC = gcc
#$ serve para chamar a variável.
OBJS = ${SRCS:.c=.o}
#todo arquivo MakeFile precisa ter "all"(all eh onde o arquivo será compilado.)
all:        $(NAME)#tudo digitado aqui irá pro libft.a

$(NAME):    $(OBJS) $(BONUS_O)
			ar -rcs $(NAME) $(OBJS) esse é para biblioetca
			$(CC) -o $(NAME) $(OBJS) esse é para o restante

.c.o:
			$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

clean:
#f de force (qnd escrever "make clean", ira apagar todos os objs)
	rm -f $(OBJS)
#serve para apagar o ".a"
fclean: clean
	rm -f $(NAME)
#limpa tudo e refaz
re: fclean all