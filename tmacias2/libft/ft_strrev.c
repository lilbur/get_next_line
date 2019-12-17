/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:35:45 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/02 22:32:02 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	buffer;

	i = 0;
	len = ft_strlen(str);
	while (len - 1 > i)
	{
		buffer = str[i];
		str[i] = str[len - 1];
		str[len - 1] = buffer;
		len--;
		i++;
	}
	return (str);
}
