/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:05:06 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/14 22:31:26 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_bzero(void *dest, unsigned int count)
{
	int				i;
	unsigned char	*ptr;

	ptr = dest;
	i = 0;
	while (i < count)
		ptr[i++] = 0;
	return (ptr);
}
