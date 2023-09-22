/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhamarat <mhamarat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:09:38 by mhamarat          #+#    #+#             */
/*   Updated: 2023/09/17 15:06:03 by mhamarat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 't';
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if (j == 't')
				str[i] -= 32;
			j = 'f';
		}
		else if (str[i] >= '0' && str[i] <= '9')
			j = 'f';
		else
			j = 't';
		i++;
	}
	return (str);
}
