/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosa <prosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 16:56:13 by prosa             #+#    #+#             */
/*   Updated: 2017/10/12 16:56:25 by prosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*head;
	t_list		*list;

	if (!lst)
		return (NULL);
	list = (*f)(lst);
	head = list;
	while (lst->next)
	{
		lst = lst->next;
		if (!(list->next = (*f)(lst)))
		{
			free(list->next);
			return (NULL);
		}
		list = list->next;
	}
	return (head);
}
