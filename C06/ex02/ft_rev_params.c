/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhamarat <mhamarat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:21:15 by mhamarat          #+#    #+#             */
/*   Updated: 2023/09/21 17:39:44 by mhamarat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = argc -1;
	while (j > 0)
	{
		i = 0;
		while (argv[j][i] != '\0' && argc)
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
	}
	return (0);
}
