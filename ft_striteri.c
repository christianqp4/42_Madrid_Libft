/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:06:15 by chquinde          #+#    #+#             */
/*   Updated: 2024/05/23 11:05:57 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}
/*
int main(void)
{
    char str[] = "asdf";
    ft_striteri(str, ft_toupper);
    printf("%s\n", str);
    printf("%s\n", ft_strmapi(str, up_down));
    return 0;
}
}*/