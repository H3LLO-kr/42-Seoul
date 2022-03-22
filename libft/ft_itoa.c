/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:52:21 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/22 15:15:16 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	_itoa_r(long num, char *str)
{
	int	ret;

	if (num / 10 == 0)
	{
		str[0] = num + '0';
		return (1);
	}
	ret = _itoa_r(num / 10, str);
	str[ret] = num % 10 + '0';
	return (ret + 1);
}

char	*ft_itoa(int num)
{
	char	*str;
	char	*ret;
	int		index;
	long	nbr;

	str = (char *)malloc(sizeof(char) * 256);
	if (!str)
		return (NULL);
	ret = str;
	nbr = num;
	if (num < 0)
	{
		nbr *= -1;
		str[0] = '-';
		str++;
	}
	index = _itoa_r(nbr, str);
	str[index] = 0;
	return (ret);
}
