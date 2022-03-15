/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:39:11 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/15 18:08:52 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *d, const void *s, unsigned int num)
{
	unsigned int		i;
	unsigned char		*dest;
	const unsigned char	*src;

	dest = d;
	src = s;
	if (!dest || !src)
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
