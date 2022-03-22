/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:11:02 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/21 13:54:18 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *s, int c, size_t num)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*src;

	i = 0;
	src = s;
	dest = d;
	if (!num || dest == src)
		return (dest);
	while (i < num)
	{
		dest[i] = src[i];
		if ((unsigned int)c % 256 == src[i])
			break ;
		i++;
	}
	if (i == num)
		return (NULL);
	return (dest + i + 1);
}
