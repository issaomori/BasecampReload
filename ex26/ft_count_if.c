/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 03:55:50 by gissao-m          #+#    #+#             */
/*   Updated: 2022/05/26 23:09:30 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count_size;
	int	i;

	count_size = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
		count_size++;
		i++;
	}
	return (count_size);
}
