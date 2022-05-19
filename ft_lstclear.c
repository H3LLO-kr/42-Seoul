/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:58:06 by chanhapa          #+#    #+#             */
/*   Updated: 2022/03/22 17:09:32 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cur;
	t_list	*tmp;

	cur = *lst;
	while (cur)
	{
		tmp = cur;
		cur = cur -> next;
		del(tmp -> content);
		free(tmp);
	}
	*lst = NULL;
}
