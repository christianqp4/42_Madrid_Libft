/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 21:04:42 by chquinde          #+#    #+#             */
/*   Updated: 2024/05/23 20:57:31 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trim_this(const char *set, char c);
static char	*n_str(const char *s, size_t start, size_t end);

char	*ft_strtrim(char const *str, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(str) - 1;
	if (ft_strlen(str) == 0)
		return (ft_strdup(""));
	while (trim_this(set, str[i]))
		i++;
	while (trim_this(set, str[j]))
		j--;
	return (n_str(str, i, j - (i - 1)));
}

static char	*n_str(const char *str, size_t start, size_t len)
{
	char	*n_str;
	size_t	i;

	if (len <= 0 || start >= ft_strlen(str))
		return (ft_strdup(""));
	n_str = ft_calloc(len + 1, sizeof(char));
	if (!n_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		n_str[i] = str[start + i];
		i++;
	}
	return (n_str);
}

static int	trim_this(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char str[] = "asdfSUEÑOasdf";
	char set[] = "asdf";
	char *trimmed = ft_ft_strtrim(str, set);
	printf("%s\n", trimmed);
}*/
