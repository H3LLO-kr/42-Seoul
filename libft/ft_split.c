/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:57:49 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/24 21:41:27 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	_is_in(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

size_t	_ret_num1(const char *src, char c)
{
	size_t	ret;
	size_t	i;

	i = 0;
	ret = 0;
	if (src[i] && src[i] != c)
	{
		ret++;
		i++;
	}
	while (src[i])
	{
		if (src[i] == c && src[i + 1] && src[i + 1] != c)
			ret++;
		i++;
	}
	return (ret);
}

size_t	_ret_num2(const char *src, char c)
{
	size_t	ret;
	size_t	i;

	i = 0;
	ret = 0;
	while (src[i] && src[i] != c)
	{
		ret++;
		i++;
	}
	return (ret);
}

char	**ft_split(const char *src, char c)
{
	char	**ret;
	char	**ret_ret;
	int		i;
	int		j;

	i = 0;
	ret = (char **)malloc(sizeof(char *) * (_ret_num1(src, c) + 1));
	if (!ret || !src)
		return (NULL);
	ret_ret = ret;
	while (src[i] && _is_in(src[i], c))
		i++;
	while (src[i])
	{
		*ret = (char *)malloc(sizeof(char) * (_ret_num2(&src[i], c) + 1));
		j = 0;
		while (src[i] && !_is_in(src[i], c))
			(*ret)[j++] = src[i++];
		(*ret)[j] = 0;
		while (src[i] && _is_in(src[i], c))
			i++;
		ret++;
	}
	*ret = 0;
	return (ret_ret);
}
