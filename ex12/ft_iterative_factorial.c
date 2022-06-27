/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 22:08:33 by gissao-m          #+#    #+#             */
/*   Updated: 2022/05/25 20:50:19 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	if (nb != 0 && (nb < 1 || nb > 12))
		return (0);
	i = 1;
	while (nb != 1)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}
