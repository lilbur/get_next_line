/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 20:49:12 by tmacias           #+#    #+#             */
/*   Updated: 2019/12/14 22:31:52 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlchr(const char *s, char c)
{
	int		len;
	char	*sc;

	if (!s)
		return (-1);
	sc = (char *)s;
	len = 0;
	while (sc[len])
	{
		if (sc[len] == c)
			return (len);
		len++;
	}
	if (!(sc[len]) && c == '\0')
		return (len);
	return (-1);
}
