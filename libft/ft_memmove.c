/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:39:11 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/16 01:16:06 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, unsigned int num)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*src;

	dest = d;
	src = s;
	if (!dest || !src)
		return (0);
	if (dest > src)
	{
		i = 0;
		while (i < num)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		i = -1;
		while (++i < num)
			dest[i] = src[i];
	}
	return (dest);
}
