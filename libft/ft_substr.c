/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 21:43:31 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/24 16:20:32 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_str;
	unsigned int	i;
	unsigned int	size;

	i = 0;
	if (!s)
		return (NULL);
	size = (unsigned int)ft_strlen(s);
	if (size < start)
		new_str = (char *)malloc(sizeof(char) * size);
	else if (len > size - start)
		new_str = (char *)malloc(sizeof(char) * (size - start + 1));
	else
		new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	while (i < len && i + start < size)
	{
		new_str[i] = s[i + start];
		i++;
	}
	new_str[i] = 0;
	return (new_str);
}
