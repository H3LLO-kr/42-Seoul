/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:03:56 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/24 21:41:01 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	size_t				i;
	const unsigned char	*s1;
	const unsigned char	*s2;

	s1 = buf1;
	s2 = buf2;
	if (count == 0)
		return (0);
	i = 0;
	while (i < count)
	{
		if (s1[i] != s2[i])
			return ((int)s1[i] - (int)s2[i]);
		i++;
	}
	if (i == count)
		return (0);
	else
		return ((int)s1[i] - (int)s2[i]);
}
