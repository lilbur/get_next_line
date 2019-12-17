/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 19:35:13 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/16 20:02:22 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char *str, char c)
{
	int		i;
	int		start;
	int		end;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		start = i;
		while (str[start] && str[start] == c)
			start++;
		end = start;
		while (str[end] && str[end] != c)
			end++;
		if (end > start)
			count++;
		i = end;
	}
	return (count);
}
