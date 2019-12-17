/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 18:17:34 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/18 18:20:17 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dst;
	i = 0;
	if (!(dst || src))
		return (NULL);
	while (i < n)
	{
		ptr2[i] = ptr1[i];
		i++;
	}
	return (dst);
}
