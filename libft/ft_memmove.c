/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:39:11 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/16 03:16:55 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t num)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*src;

	dest = d;
	src = s;
	if (!dest && !src)
		return (NULL);
	if (dest >= src)
	{
		i = num + 1;
		while (--i)
			dest[i - 1] = src[i - 1];
	}
	else
	{
		i = -1;
		while (++i < num)
			dest[i] = src[i];
	}
	return (dest);
}
