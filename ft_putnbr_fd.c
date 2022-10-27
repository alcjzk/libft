/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjaasalo <tjaasalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:19:12 by tjaasalo          #+#    #+#             */
/*   Updated: 2022/10/27 22:26:36 by tjaasalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	printf("%i\n", INT_MIN);
	int x = (int)(((((unsigned int)-2) / 2) + 1));
	printf("%i\n", x);

	c = '0';
	if (n < 0)
	{
		write(fd, "-", 1);
		if (n == (int)(((((unsigned int)-2) / 2) + 1)))
		{
			ft_putnbr_fd((int)(((((unsigned int)-2) / 2) + 1) / 10) * -1, fd);
			ft_putnbr_fd((int)(((((unsigned int)-2) / 2) + 1) % 10) * -1, fd);
			return ;
		}
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		c = (char)(n % 10 + 48);
		write(fd, &c, 1);
	}
	else if (n == 0)
		write(fd, &c, 1);
	else
	{
		c = (char)(n % 10 + 48);
		write(fd, &c, 1);
	}
}
