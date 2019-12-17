/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 22:40:37 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/21 18:09:34 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	long	keep;
	char	*str;

	keep = n;
	len = ft_cntdgt(n);
	if (!(str = ft_memalloc(len + 1)))
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		keep *= -1;
	}
	else if (n == 0)
		str[0] = '0';
	while (keep > 0)
	{
		str[len - 1] = 48 + (keep % 10);
		keep /= 10;
		len--;
	}
	return (str);
}
