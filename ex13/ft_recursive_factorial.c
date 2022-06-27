/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:50:06 by gissao-m          #+#    #+#             */
/*   Updated: 2022/05/25 20:51:58 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	if ((nb <= 0) || (nb > 12))
		return (0);
	return (nb * ft_recursive_factorial (nb - 1));
}
