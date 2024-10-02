/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:57:51 by chquinde          #+#    #+#             */
/*   Updated: 2024/05/23 21:15:43 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			ch;

	i = 0;
	ch = (char)c;
	if (ch == '\0')
	{
		while (s[i])
			i++;
		return ((char *)&s[i]);
	}
	while (s[i])
	{
		if ((*(s + i)) == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*int main(void)
{
	char str[] = "asdfSUEÑOasdf";
	char *result = ft_strchr(str, 'S');
	printf("%s\n", result);
}
*/
