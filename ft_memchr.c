/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 12:56:53 by chquinde          #+#    #+#             */
/*   Updated: 2024/05/23 21:25:09 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		ch;
	size_t				i;

	i = 0;
	ptr = s;
	ch = (unsigned char)c;
	while (n--)
	{
		if (ptr[i] == ch)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
/*int main(void)
{
	char str[] = "asdfG";
	char *result = ft_memchr(str, 'G', 5);
	printf("%s\n", result);
}*/
