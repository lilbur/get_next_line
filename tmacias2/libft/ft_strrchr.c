/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:06:35 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/18 18:40:33 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			tmp = i;
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	if (tmp != -1)
		return ((char *)s + tmp);
	return (NULL);
}
