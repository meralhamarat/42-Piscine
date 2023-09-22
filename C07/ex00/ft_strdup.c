/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhamarat <mhamarat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 01:14:17 by mhamarat          #+#    #+#             */
/*   Updated: 2023/09/22 20:27:11 by mhamarat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i;
    int srclen;
    char *dest;
    
    i = 0;
    srclen = 0;
    while (src[srclen])
        srclen++;
    dest = malloc(sizeof(char) * srclen + 1);
    if (!dest)
        return (NULL);
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }   
    dest[i] = '\0';
    return (dest);
}
