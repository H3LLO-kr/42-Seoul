/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:01:02 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/14 22:03:56 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *dest, int value, unsigned int count)
{
	unsigned int	i;
	unsigned char	*ptr;

	ptr = dest;
	i = 0;
	while (i < count)
		ptr[i++] = (unsigned char)value;
	return (ptr);
}
