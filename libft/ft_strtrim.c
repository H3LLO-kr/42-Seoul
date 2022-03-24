/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 22:02:54 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/24 21:17:50 by chanhapa         ###   ########.fr       */
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

size_t	_trim_len(const char *s1, char const *set)
{
	size_t	ret;

	ret = 0;
	while (*s1 && _is_in_t(*s1, set))
		s1++;
	while (*s1)
	{
		ret++;
		s1++;
	}
	s1--;
	while (ret && _is_in_t(*s1, set))
	{
		ret--;
		s1--;
	}
	return (ret);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	i;
	size_t	len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	len = _trim_len(s1, set);
	trimmed = (char *)malloc(sizeof(char) * (len + 1));
	if (!trimmed)
		return (NULL);
	while (*s1 && _is_in_t(*s1, set))
		s1++;
	while (*s1 && i < len)
		trimmed[i++] = *s1++;
	trimmed[i] = 0;
	return (trimmed);
}
