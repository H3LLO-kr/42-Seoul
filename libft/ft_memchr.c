/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:10:49 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/16 03:25:41 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = ptr;
	while (i < num)
	{
		if (str[i] == (unsigned char)value)
			return (str + i);
		i++;
	}
	return (NULL);
}
