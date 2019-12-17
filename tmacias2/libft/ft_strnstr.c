/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 20:15:37 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/27 20:16:21 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (h[i] && (i < len))
	{
		while ((h[i + j] == n[j]) && n[j] && ((i + j) < len))
			j++;
		if (!n[j])
			return ((char *)&h[i]);
		j = 0;
		i++;
	}
	if (n[0] == '\0')
		return ((char *)&h[i]);
	return (NULL);
}
