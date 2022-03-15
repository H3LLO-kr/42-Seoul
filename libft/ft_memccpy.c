/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:11:02 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/11 20:14:06 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, unsigned int num)
{
	unsigned int	i;

	i = 0;
	if (!num || dest == src)
		return (dest);
	while (i < num)
	{
		dest[i] = src[i];
		if (c == src[i])
			break ;
		i++;
	}
	return (dest);
}
