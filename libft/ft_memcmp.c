/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:03:56 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/25 21:14:18 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*buf1;
	const unsigned char	*buf2;

	buf1 = s1;
	buf2 = s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (buf1[i] != buf2[i])
			return ((int)buf1[i] - (int)buf2[i]);
		i++;
	}
	if (i == n)
		return (0);
	else
		return ((int)buf1[i] - (int)buf2[i]);
}
