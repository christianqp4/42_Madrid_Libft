/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:49:22 by chquinde          #+#    #+#             */
/*   Updated: 2024/05/02 18:49:33 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*p_dest;
	char	*p_src;

	if (!dest && !src)
		return (dest);
	p_dest = (char *)dest;
	p_src = (char *)src;
	if (src < dest)
	{
		while (n--)
			*(p_dest + n) = *(p_src + n);
	}
	else
		while (n--)
			*p_dest++ = *p_src++;
	return (dest);
}
