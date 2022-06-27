/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:59:22 by gissao-m          #+#    #+#             */
/*   Updated: 2022/05/27 17:34:21 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

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

void	ft_print_arr(char **arr)
{
	while (*arr)
	{
		ft_putstr(*arr);
		ft_putchar('\n');
		arr++;
	}
}

void	ft_order_with_ascii(char **v, int n)
{
	int		count_size;
	int		i;
	char	*aux;

	count_size = 0;
	while (count_size < n)
	{
		i = 0;
		while (v[count_size][i] == v[count_size + 1][i])
			i++;
		if (v[count_size][i] > v[count_size + 1][i])
		{
			aux = v[count_size];
			v[count_size] = v[count_size + 1];
			v[count_size + 1] = aux;
			count_size = 0;
		}
		count_size++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		argc--;
		ft_order_with_ascii(argv, argc);
		ft_print_arr(argv + 1);
	}
	return (0);
}
