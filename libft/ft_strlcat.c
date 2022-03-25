/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:59:34 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/25 21:06:26 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[j])
		j++;
	if (i + 1 > dstsize)
		return (j + dstsize);
	k = 0;
	while (i + k + 1 < dstsize && src[k])
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + k] = 0;
	return (i + j);
}
