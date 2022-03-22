/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 22:02:54 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/22 17:45:48 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	_is_in_t(char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	trimmed = (char *)malloc(sizeof(char) * (ft_strlen((char *)s1) + 1));
	if (!trimmed)
		return (NULL);
	while (*s1 && _is_in_t(*s1, set))
		s1++;
	while (*s1)
		trimmed[i++] = *s1++;
	trimmed[i] = 0;
	while (i > 0 && _is_in_t(*(--s1), set))
	{
		trimmed[--i] = 0;
	}
	return (trimmed);
}
