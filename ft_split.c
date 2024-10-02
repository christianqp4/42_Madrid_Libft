/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:06:09 by chquinde          #+#    #+#             */
/*   Updated: 2024/05/23 20:48:16 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	words(char const	*str, char c)
{
	size_t	w;

	w = 0;
	while (*str)
	{
		if (*str != c && (*(str + 1) == c || *(str + 1) == '\0'))
			w++;
		str++;
	}
	return (w);
}

void	*w_alloc(char const *str, char c, char **aarr)
{
	size_t	i;
	size_t	len_w;
	size_t	i_words;

	i = 0;
	i_words = 0;
	while (str[i] != '\0')
	{
		len_w = 1;
		if (str[i] != c)
		{
			while ((str[i + len_w] != '\0') && (str[i + len_w] != c))
				len_w++;
			aarr[i_words++] = ft_substr(str, i, len_w);
			if (aarr[i_words - 1] == NULL)
			{
				while (i_words-- > 0)
					free(aarr[i_words]);
				free(aarr);
				return (NULL);
			}
		}
		i += len_w;
	}
	return (aarr);
}

char	**ft_split(char const *str, char c)
{
	char	**aarr;
	size_t	n_words;

	n_words = words(str, c);
	aarr = malloc ((n_words + 1) * sizeof(char *));
	if (aarr == NULL)
		return (NULL);
	if (n_words == 0)
	{
		*aarr = NULL;
		return (aarr);
	}
	if (w_alloc (str, c, aarr) != NULL)
	{
		aarr[n_words] = NULL;
		return (aarr);
	}
	return (NULL);
}
/*
int main(void)
{
	size_t i;
	char c = ' ';
	char **strs = ft_split("asdf asdf", c);
	printf("%s\n", strs[0]);
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
}*/
