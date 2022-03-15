/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:03:04 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/15 15:18:35 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *d, const void *s, unsigned int num)
{
	unsigned int		i;
	unsigned char		*dest;
	const unsigned char	*src;

	dest = d;
	src = s;
	i = 0;
	if (num == 0 || dest == src)
		return (dest);
	while (i < num)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
