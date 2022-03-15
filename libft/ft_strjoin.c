/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:53:21 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/14 22:54:01 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str);
int	_len_ret(int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	long		len;
	int			i;
	char		*str;
	int			j[2];

	i = 0;
	len = _len_ret(size, strs, sep);
	str = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	j[0] = 0;
	while (i < len)
	{
		j[1] = 0;
		while (*strs[j[0]])
			str[i++] = *(strs[j[0]]++);
		j[0]++;
		if (i == len)
			break ;
		while (sep[j[1]])
			str[i++] = sep[j[1]++];
	}
	str[i] = 0;
	return (str);
}

int	_len_ret(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	i = 0;
	if (size <= 0)
		return (0);
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

int	ft_strlen(char *str)
{
	int	ret;

	ret = 0;
	while (str[ret])
		ret++;
	return (ret);
}
