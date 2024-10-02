/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:15:06 by chquinde          #+#    #+#             */
/*   Updated: 2024/05/22 20:35:42 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (src == NULL || dest == NULL)
		return (0);
	if (dstsize > 0)
	{
		while (*src != '\0' && i < (dstsize - 1))
		{
			*dest++ = *src++;
			i++;
		}
		*dest = '\0';
	}
	while (*src++)
		i++;
	return (i);
}
/*
int main (void){
char src[] = "Hello";
char dest[6];
ft_strlcpy(dest, src, sizeof(dest));

char src2[] = "atari mae da";
char dest2[10];
ft_strlcpy(NULL, NULL, 0);
}
*/