/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:34:08 by chquinde          #+#    #+#             */
/*   Updated: 2024/05/06 01:29:24 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*int	main()
{
	printf("%d\n", ft_isprint(1));
	printf("%d\n", ft_isprint(127));
	printf("%d\n", ft_isprint('	'));
	printf("%d\n", isprint('	'));
	
	return (0);	
}*/