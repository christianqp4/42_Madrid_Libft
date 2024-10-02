/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:55:27 by chquinde          #+#    #+#             */
/*   Updated: 2024/05/04 12:32:31 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (c);
	return (0);
}
/*int	main()
{
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('8'));
	printf("%d\n", ft_isalnum((int)L'ñ'));
	return (0);
}*/