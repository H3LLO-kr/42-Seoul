/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 23:12:45 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/16 03:35:25 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen((char *)str) - 1;
	while (str[i] != c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return ((char *)str + i);
}
