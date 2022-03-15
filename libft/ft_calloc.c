/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 23:37:28 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/15 15:31:12 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int nmemb, size_t size)
{
	unsigned char	*ptr;
	unsigned char	*ret;
	unsigned int	i;

	ptr = malloc(nmemb * size);
	ret = ptr;
	i = 0;
	while (i < nmemb)
	{
		*ptr = 0;
		ptr++;
		i++;
	}
	return (ret);
}
