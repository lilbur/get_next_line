/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 17:23:16 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/18 18:16:37 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		ptr2[i] = ptr1[i];
		if (ptr2[i] == (unsigned char)c)
		{
			return ((void *)(dst + i + 1));
		}
		i++;
	}
	return (NULL);
}
