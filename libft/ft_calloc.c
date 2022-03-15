/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 23:37:28 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/15 14:56:30 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	unsigned char	*ret;
	int				i;

	ptr = malloc(nmemb * size);
	ret = ptr;
	i = 0;
	while (i < nmemb)
	{
		*ptr = 0;
		ptr++l;
		i++;
	}
	return (ret);
}
