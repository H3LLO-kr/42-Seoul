/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:10:49 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/15 14:45:11 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(void *ptr, int value, unsigned int num)
{
	unsigned int	i;
	unsigned char	*str;

	i = 0;
	str = ptr;
	while (i < num && str[i])
	{
		if (str[i] == value)
			return (&str[i]);
		i++;
	}
	return (0);
}
