/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhamarat <mhamarat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:21:20 by mhamarat          #+#    #+#             */
/*   Updated: 2023/09/11 23:04:45 by mhamarat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int	*tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size)
	{
		size--;
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
	}
}
