/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:07:02 by chquinde          #+#    #+#             */
/*   Updated: 2024/05/07 21:42:44 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
/*
#include <fcntl.h>
int main(void)
{
    //char str [] = "keep calm";
    //int file;

    //file = open("file_hd", O_RDWR);
    //ft_putendl_fd(frase, file);
    //close(file);

    ft_putendl_fd("asdf", 1);
}*/
