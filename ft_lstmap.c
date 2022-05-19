/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:04:58 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/22 17:27:40 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*cur;

	if (!lst)
		return (NULL);
	ret = ft_lstnew(f(lst -> content));
	if (!ret)
		return (NULL);
	cur = ret;
	lst = lst -> next;
	while (lst)
	{
		cur -> next = ft_lstnew(f(lst -> content));
		if (!cur)
		{
			ft_lstclear(&ret, del);
			return (0);
		}
		cur = cur -> next;
		lst = lst -> next;
	}
	return (ret);
}
