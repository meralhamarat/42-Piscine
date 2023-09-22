/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhamarat <mhamarat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:47:13 by mhamarat          #+#    #+#             */
/*   Updated: 2023/09/20 19:17:43 by mhamarat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	else
	{
		while (i < power)
		{
			result *= nb;
			i++;
		}
	}
	return (result);
}
