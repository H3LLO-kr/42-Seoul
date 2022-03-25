/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:39:11 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/25 21:04:47 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*srcs;

	dest = dst;
	srcs = src;
	if (!dest && !srcs)
		return (NULL);
	if (dest >= srcs)
	{
		i = len + 1;
		while (--i)
			dest[i - 1] = srcs[i - 1];
	}
	else
	{
		i = -1;
		while (++i < len)
			dest[i] = srcs[i];
	}
	return (dest);
}
