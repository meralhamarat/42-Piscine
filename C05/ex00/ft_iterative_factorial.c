/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhamarat <mhamarat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:47:01 by mhamarat          #+#    #+#             */
/*   Updated: 2023/09/20 19:16:57 by mhamarat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;	

	res = 1;
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (res);
}
