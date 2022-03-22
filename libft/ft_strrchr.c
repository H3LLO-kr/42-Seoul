/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 23:12:45 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/21 13:38:50 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	*ustr;

	i = ft_strlen((char *)str);
	ustr = (unsigned char *)str;
	while (ustr[i] != c % 256)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return ((char *)str + i);
}
