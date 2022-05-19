/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:03:04 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/25 21:10:41 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*srcs;

	dest = dst;
	srcs = src;
	i = 0;
	if (n == 0 || dest == srcs)
		return (dest);
	while (i < n)
	{
		dest[i] = srcs[i];
		i++;
	}
	return (dest);
}
