/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 16:42:10 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/18 18:41:37 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char *str, char c)
{
	int		i;
	int		index;
	int		len;
	char	**dest;

	i = 0;
	index = 0;
	if (!str)
		return (NULL);
	len = ft_countwords(str, c);
	dest = ft_memalloc(sizeof(char*) * (len + 1));
	if (!dest)
		return (NULL);
	while (len > 0)
	{
		dest[index] = ft_findwords(str, c, &i);
		index++;
		len--;
	}
	return (dest);
}
