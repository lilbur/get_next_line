/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 00:35:15 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/21 14:42:28 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;

	if (alst)
	{
		while (*alst)
		{
			list = (*alst)->next;
			del((*alst)->content, (*alst)->content_size);
			free(*alst);
			*alst = list;
		}
	}
	alst = NULL;
}
