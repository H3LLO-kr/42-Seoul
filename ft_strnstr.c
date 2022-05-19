/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 23:34:35 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/24 14:39:31 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	str = (char *)haystack;
	if (needle[0] == '\0')
		return (str);
	while (str[i] && i < len)
	{
		if (str[i] == needle[0])
		{
			j = 0;
			while (needle[j] && i + j < len)
			{
				if (str[i + j] != needle[j])
					break ;
				j++;
			}
			if (needle[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
