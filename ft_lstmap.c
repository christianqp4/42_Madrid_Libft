/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:31:28 by chquinde          #+#    #+#             */
/*   Updated: 2024/10/02 20:51:58 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list 	*start;
	t_list	*n_node;

	start = NULL;
	while (lst != NULL)
	{
		n_node = ft_lstnew((f)(lst->content));
		ft_lstadd_back(&start, n_node);
		if (n_node == NULL)
		{
			ft_lstclear (&start, del);
			return ;
		}
		start = n_node;
		lst = lst->next;
	}
	return (lst);
}
