/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:15:57 by chquinde          #+#    #+#             */
/*   Updated: 2024/10/02 20:28:07 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int size;
	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return  (size);
}