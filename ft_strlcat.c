/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:58:50 by chquinde          #+#    #+#             */
/*   Updated: 2024/05/22 18:34:06 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	src_len;
	size_t	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (dest_len >= destsize)
		dest_len = destsize;
	if (dest_len == destsize)
		return (destsize + src_len);
	if (destsize - dest_len > src_len)
		ft_memcpy(dest + dest_len, src, src_len + 1);
	else
	{
		ft_memcpy(dest + dest_len, src, destsize - dest_len - 1);
		dest[destsize - 1] = '\0';
	}
	return (dest_len + src_len);
}
/*int main(void)
{
char dest[10] = "Hello";
char src[] = " World";
ft_strlcat(dest, src, sizeof(dest));

char dest2[5] = "test";
char src2[] = "asdfg";
ft_strlcat(dest, src, 15);
}*/