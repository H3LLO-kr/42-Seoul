/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 23:02:56 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/14 23:10:48 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	char	chr;
	int		i;

	i = 0;
	chr = c;
	while (str[i])
	{
		if (str[i] == chr)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
