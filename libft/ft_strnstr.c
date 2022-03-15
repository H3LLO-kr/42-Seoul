/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 23:34:35 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/15 15:24:11 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *str, char *to_find, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] && i < size)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j] && i + j < size)
			{
				if (str[i + j] != to_find[j])
					break ;
				j++;
			}
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
