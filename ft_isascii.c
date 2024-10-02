/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:02:21 by chquinde          #+#    #+#             */
/*   Updated: 2024/04/27 12:34:25 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "stdio.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main()
{
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii('b'));
	printf("%d\n", ft_isascii(123));
	printf("%d\n", ft_isascii(128));
	return (0);
}*/
