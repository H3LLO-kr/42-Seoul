/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:57:49 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/15 14:59:19 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	_is_in(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
		if (c == charset[i++])
			return (1);
	return (0);
}

char	**ft_split(char *src, char *charset)
{
	char	**ret;
	char	**ret_ret;
	int		i;
	int		j;

	i = 0;
	ret = (char **)malloc(sizeof(char *) * 100);
	ret_ret = ret;
	if (!ret)
		return (0);
	while (src[i] && _is_in(src[i], charset))
		i++;
	while (src[i])
	{
		*ret = (char *)malloc(sizeof(char) * 256);
		j = 0;
		while (src[i] && !_is_in(src[i], charset))
			(*ret)[j++] = src[i++];
		(*ret)[j] = 0;
		while (src[i] && _is_in(src[i], charset))
			i++;
		ret++;
	}
	*ret = 0;
	return (ret_ret);
}
