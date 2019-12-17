/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 18:04:35 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/27 18:58:21 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t needlelen;
	size_t haystacklen;

	needlelen = ft_strlen(needle);
	haystacklen = ft_strlen(haystack);
	if (needlelen == 0)
		return ((char *)haystack);
	if (haystacklen == 0)
		return (NULL);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			if (!ft_strncmp(haystack, needle, needlelen))
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
