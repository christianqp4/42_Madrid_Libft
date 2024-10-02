/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 21:05:49 by chquinde          #+#    #+#             */
/*   Updated: 2024/05/23 11:05:58 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*n_str;
	size_t			len;
	unsigned int	i;

	len = ft_strlen(s);
	n_str = (char *)malloc(len + 1);
	if (n_str == NULL)
		return (NULL);
	n_str[len] = '\0';
	i = 0;
	while (i < len)
	{
		n_str[i] = f(i, s[i]);
		i++;
	}
	n_str[i] = 0;
	return (n_str);
}
/*
int main(void)
{
    char str[] = "asdf";
    ft_striteri(str, ft_toupper);
    printf("%s\n", str);
    printf("%s\n", ft_strmapi(str, up_down));
    return 0;
}*/
