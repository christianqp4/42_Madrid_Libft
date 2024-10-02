/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 21:07:18 by chquinde          #+#    #+#             */
/*   Updated: 2024/05/07 21:42:40 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
#include <fcntl.h>
int	main(void)
{
	//char frase [] = "asdf";
	//int file;

	//file = open("file", O_RDWR);
	//ft_putendl_fd(frase, file);
	//close(file);
	
	ft_putendl_fd("asdf", 1);
}*/
