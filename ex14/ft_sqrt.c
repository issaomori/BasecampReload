/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 18:56:04 by gissao-m          #+#    #+#             */
/*   Updated: 2022/05/25 20:53:28 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count_size;

	count_size = 0;
	while (count_size * count_size < nb)
		count_size++;
	if (count_size * count_size == nb)
		return (count_size);
	else
		return (0);
}
