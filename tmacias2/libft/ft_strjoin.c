/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 10:59:22 by tmacias           #+#    #+#             */
/*   Updated: 2019/12/14 22:54:12 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	int		len;

	if (!s1 && !s2)
		return (NULL);
	if (!s1 || !s2)
		return (ft_strdup(!s1 ? s2 : s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	fresh = (char *)malloc(sizeof(*s1) * (len + 1));
	if (!fresh)
		return (NULL);
	ft_strcpy(fresh, s1);
	ft_strcat(fresh, s2);
	return (fresh);
}
