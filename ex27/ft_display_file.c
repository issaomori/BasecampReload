/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 21:16:17 by gissao-m          #+#    #+#             */
/*   Updated: 2022/05/27 18:58:22 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	count_size;

	count_size = 0;
	while (str[count_size] != '\0')
	{
		ft_putchar(str[count_size]);
		count_size++;
	}
}

int	parse_args(int argc)
{
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		file_descriptor;
	int		answer;
	char	buf[BUF_SIZE + 1];

	if (parse_args(argc))
		return (0);
	file_descriptor = open(argv[1], O_RDONLY);
	if (file_descriptor == -1)
		return (1);
	answer = read(file_descriptor, buf, BUF_SIZE);
	while (answer != 0)
	{
		buf[answer] = '\0';
		ft_putstr(buf);
		answer = read(file_descriptor, buf, BUF_SIZE);
	}
	close(file_descriptor);
	return (0);
}
