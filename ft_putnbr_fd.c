/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 22:33:35 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/17 22:42:40 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	_write_r(long nbr, int fd)
{
	char	c;

	if (nbr / 10 == 0)
	{
		c = nbr + '0';
		write(fd, &c, 1);
	}
	else
	{
		_write_r(nbr / 10, fd);
		c = nbr % 10 + '0';
		write(fd, &c, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (n < 0)
	{
		nbr *= -1;
		write(fd, "-", 1);
	}
	_write_r(nbr, fd);
}
