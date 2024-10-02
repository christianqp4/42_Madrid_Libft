/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:03:27 by chquinde          #+#    #+#             */
/*   Updated: 2024/10/02 20:27:53 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
	t_list  *n_node;
	n_node = malloc(sizeof(t_list));
	if (!n_node)
		return  NULL;
	n_node->content = content;
	n_node->next = NULL;
	return (n_node);
}