/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:14:19 by chquinde          #+#    #+#             */
/*   Updated: 2024/05/22 13:17:18 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p_src;
	unsigned char	*p_dest;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	p_src = (unsigned char *)src;
	p_dest = (unsigned char *)dst;
	while (n--)
	{
		*p_dest++ = *p_src++;
	}
	return (dst);
}
/*
int main(void)
{
	unsigned char *null = NULL;
	unsigned char dest []= "casa";
	size_t size;
	unsigned char *result;

	size = 7;
	result = ft_memcpy(dest, null, size);
	printf("%s\n", result);
	printf("%s\n", ft_memcpy(dest, null, size));
}
*/