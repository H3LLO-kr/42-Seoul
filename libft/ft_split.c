/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:57:49 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/15 18:25:54 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	_is_in(char c, char sep)
{
	int	i;

	i = 0;
	if (c == sep)
		return (1);
	return (0);
}

char	**ft_split(char *src, char sep)
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
	while (src[i] && _is_in(src[i], sep))
		i++;
	while (src[i])
	{
		*ret = (char *)malloc(sizeof(char) * 256);
		j = 0;
		while (src[i] && !_is_in(src[i], sep))
			(*ret)[j++] = src[i++];
		(*ret)[j] = 0;
		while (src[i] && _is_in(src[i], sep))
			i++;
		ret++;
	}
	*ret = 0;
	return (ret_ret);
}
