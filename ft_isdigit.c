/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:50:10 by chquinde          #+#    #+#             */
/*   Updated: 2024/04/27 12:00:47 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	printf("%d\n", ft_isdigit('2'));
	printf("%d\n", ft_isdigit('a'));
	
	int i = '0';
	while (i <= '9')
       	{
		printf("%d\n", ft_isdigit(i));
        	i++;
	}
}*/
