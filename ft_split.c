/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:57:49 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/26 17:41:42 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

void	*_free_all(char **ret)
{
	int	i;

	i = 0;
	if (ret)
	{
		while (ret[i])
			free(ret[i++]);
		free(ret);
	}
	return (NULL);
}

void	_str_cpy(const char *src, int *i, char c, char *ret)
{
	int	j;

	j = 0;
	while (src[*i] && c != src[*i])
		ret[j++] = src[(*i)++];
	ret[j] = 0;
	while (src[*i] && c == src[*i])
		(*i)++;
}

char	**ft_split(const char *src, char c)
{
	char	**ret;
	char	**ret_ret;
	int		i;

	i = 0;
	if (!src)
		return (NULL);
	ret = (char **)malloc(sizeof(char *) * (_ret_num1(src, c) + 1));
	if (!ret)
		return (NULL);
	ret_ret = ret;
	while (src[i] && c == src[i])
		i++;
	while (src[i])
	{
		*ret = (char *)malloc(sizeof(char) * (_ret_num2(&src[i], c) + 1));
		if (!*ret)
			return (_free_all(ret_ret));
		_str_cpy(src, &i, c, *ret);
		ret++;
	}
	*ret = 0;
	return (ret_ret);
}
