/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 22:02:57 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/20 21:29:07 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char					*sc;
	unsigned int			i;

	i = 0;
	if (!s || !f)
		return (NULL);
	sc = ft_strnew(ft_strlen(s));
	if (sc == NULL)
		return (NULL);
	while (s[i])
	{
		sc[i] = f(s[i]);
		i++;
	}
	return (sc);
}
