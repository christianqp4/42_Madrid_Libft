/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinde <chquinde@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 21:07:37 by chquinde          #+#    #+#             */
/*   Updated: 2024/05/07 21:42:43 by chquinde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	char_conv_mod;

	if (n < 0)
	{
		write(fd, "-", 1);
		char_conv_mod = -(n % 10) + '0';
	}
	if (n < -9)
		ft_putnbr_fd(-(n / 10), fd);
	if (n == 0)
	{
		write (fd, "0", 1);
		return ;
	}
	if (n > 0)
		char_conv_mod = n % 10 + '0';
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	write(fd, &char_conv_mod, 1);
}
/*
#include <fcntl.h>
int main(void)
{
	int n;
	int file_d;

	file_d = open("asdf", O_RDWR);
	n = 10;
	ft_putnbr_fd(n,file_d);
}*/
