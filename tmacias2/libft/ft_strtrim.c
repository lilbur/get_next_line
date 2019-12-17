/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 11:10:24 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/16 20:36:29 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;

	start = 0;
	if (!s)
		return (NULL);
	while (s[start] == ' ' || s[start] == ',' || s[start] == '\n' ||
			s[start] == '\t')
		start++;
	if (s[start] == '\0')
		return (ft_strnew(0));
	end = start;
	while (s[end] != '\0')
		end++;
	end--;
	while (s[end] == ' ' || s[end] == ',' || s[end] == '\n' ||
			s[end] == '\t')
		end--;
	return (ft_strsub(s, start, ((end - start) + 1)));
}
