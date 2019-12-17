/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 17:38:48 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/12 21:53:42 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstc;
	unsigned char	*srcc;

	dstc = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (srcc < dstc && srcc + (len - 1) > dstc)
	{
		srcc = srcc + (len - 1);
		dstc = dstc + (len - 1);
		while (len > 0)
		{
			*dstc-- = *srcc--;
			len--;
		}
	}
	else
		while (len > 0)
		{
			*dstc++ = *srcc++;
			len--;
		}
	return (dst);
}
