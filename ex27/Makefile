# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 23:03:16 by gissao-m          #+#    #+#              #
#    Updated: 2022/05/27 17:40:15 by gissao-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  ft_display_file

HEADER = ft_display_file.h

SRCS = ft_display_file.c

CFLAGS =  -Wall -Wextra -Werror

CC = gcc

OBJS = ${SRCS:.c=.o}

all:        $(NAME)

$(NAME):    $(OBJS) $(BONUS_O)
			$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:

	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all