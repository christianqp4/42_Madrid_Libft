/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:45:05 by chquinde          #+#    #+#             */
/*   Updated: 2024/04/27 12:30:33 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"
/*int myisspace(char c)
{
	if ((c >= 9 && c <= 13) || (c == 32)
		|| (c == 43 || c == 45))
	{
		return (1);
	}
	else
		return (0);
}*/
int	ft_atoi(const char *str)
{
	int	n;
	int	minus;
	int	i;

	i = 0;
	minus = 0;
	n = 0;
	while ((str[i] == ' ' || str[i] == 9 || str[i] == 10
			|| str[i] == 11 || str[i] == 12 || str[i] == 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		n = n * 10 + (str[i++] - '0');
	if (minus)
		n *= -1;
	return (n);
}
/*
int	main(void)
{
	printf("%d\n", atoi(" 	--12"));
	printf("%d\n", ft_atoi("		--12"));		
	return (0);
}*/
/*	while (!(str[i] >= '0' && str[i] <= '9') && (str[i]))
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z')
			|| !myisspace(str[i]))
			return (0);
		else if (str[i] == '-')
			++minus;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	if (minus)c
		n *= -1;
	return (n);
*/
