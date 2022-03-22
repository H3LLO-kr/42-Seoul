/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:59:34 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/22 17:32:19 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	while (src[j])
		j++;
	if (i + 1 > size)
		return (j + size);
	k = 0;
	while (i + k + 1 < size && src[k])
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = 0;
	return (i + j);
}
