/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 21:05:24 by chquinde          #+#    #+#             */
/*   Updated: 2024/05/23 12:02:47 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long nbr);
static char	*str_c(int len);

char	*ft_itoa(int n)
{
	char		*conv;
	long		nbr;
	int			len;
	int			i;

	nbr = n;
	len = int_len(nbr);
	conv = str_c(len);
	if (!conv)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	i = len - 1;
	while (nbr != 0)
	{
		conv[i] = ((nbr % 10) + 48);
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
		conv[0] = '-';
	conv[len] = 0;
	return (conv);
}

static char	*str_c(int len)
{
	char	*tmp;

	tmp = malloc ((len +1) * sizeof(char));
	if (!tmp)
		return (NULL);
	tmp[0] = '0';
	return (tmp);
}

static int	int_len(long nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		i++;
		nbr = -nbr;
	}
	if (nbr == 0)
		i++;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
    char *r = ft_itoa(-2147483648);
    printf("%s",r);
    free(r);
}*/
