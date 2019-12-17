/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 18:33:15 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/20 22:10:18 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*sc;
	unsigned int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	sc = ft_strnew(ft_strlen(s));
	if (sc == NULL)
		return (NULL);
	while (s[i])
	{
		sc[i] = f(i, s[i]);
		i++;
	}
	sc[i] = '\0';
	return (sc);
}
