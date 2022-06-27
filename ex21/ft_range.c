/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 00:59:35 by gissao-m          #+#    #+#             */
/*   Updated: 2022/05/26 21:02:39 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*range;
	int		count_size;

	count_size = 0;
	if (min >= max)
		return (0);
	count_size = 0;
	range = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		range[count_size] = min;
		count_size++;
		min++;
	}
	return (range);
}
