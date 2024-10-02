/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:30:16 by chquinde          #+#    #+#             */
/*   Updated: 2024/04/27 12:34:15 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*
int	main()
{
	printf("%d", ft_isalpha('a'));
	printf("%d", ft_isalpha('Z'));
	printf("%d", ft_isalpha((int)L'ñ'));	
	printf("%d", ft_isalpha('3'));

	return (0);
}*/