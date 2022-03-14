/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 23:37:28 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/14 23:54:03 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	void	*ret;
	int		i;

	ptr = malloc(nmemb * size);
	ret = ptr;
	i = 0;
	while (i < nmemb)
	{
		*ptr = 0;
		ptr += size;
		i++;
	}
	return (ret);
}
