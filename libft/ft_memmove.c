/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:39:11 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/11 20:55:57 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int num)
{
	int	i;

	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		i = num;
		while (--i >= 0)
			dest[i] = src[i];
	}
	else
	{
		i = -1;
		while (++i < num)
			dest[i] = src[i];
	}
	return (dest);
}
