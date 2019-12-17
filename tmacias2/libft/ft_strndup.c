/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 18:36:42 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/21 15:18:15 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t len)
{
	int		i;
	char	*ret;

	i = 0;
	if (!(ret = ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i] && len > 0)
	{
		ret[i] = s[i];
		i++;
		len--;
	}
	return (ret);
}
