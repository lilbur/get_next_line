/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 00:41:44 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/21 14:56:24 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;
	t_list	*head;

	if (!lst)
		return (NULL);
	list = (*f)(lst);
	head = list;
	while (lst->next)
	{
		lst = lst->next;
		list->next = f(lst);
		list = list->next;
	}
	return (head);
}
