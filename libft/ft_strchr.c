/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 23:02:56 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/16 03:33:48 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	chr;
	int		i;

	i = 0;
	chr = c;
	while (str[i] != chr)
	{
		if (!str[i])
			return (NULL);
		i++;
	}
	return ((char *)str + i);
}
