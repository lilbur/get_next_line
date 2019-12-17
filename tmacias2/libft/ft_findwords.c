/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findwords.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 19:24:10 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/18 18:05:34 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_findwords(char *str, char c, int *index)
{
	int		start;
	int		end;

	start = *index;
	while (str[start] && str[start] == c)
		start++;
	end = start;
	while (str[end] && str[end] != c)
		end++;
	*index = end;
	return (ft_strndup(str + start, end - start));
}
