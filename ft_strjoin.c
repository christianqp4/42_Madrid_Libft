/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 20:38:26 by chquinde          #+#    #+#             */
/*   Updated: 2024/05/22 21:36:56 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*nstr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	nstr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (nstr == NULL)
		return (NULL);
	while (s1[i])
		nstr[j++] = s1[i++];
	i = 0;
	while (s2[i])
		nstr[j++] = s2[i++];
	nstr[j] = 0;
	return (nstr);
}
