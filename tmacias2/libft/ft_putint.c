/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 05:41:30 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/27 20:54:24 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putint(int n, int size, int fd)
{
	char	arr[size + 2];
	int		i;
	long	tmp;

	arr[size + 1] = '\0';
	arr[size] = '\n';
	i = size;
	tmp = n;
	if (n < 0)
	{
		arr[0] = '-';
		tmp *= -1;
	}
	else if (n == 0)
		arr[0] = '0';
	while (tmp > 0)
	{
		arr[i - 1] = tmp % 10 + '0';
		tmp /= 10;
		i--;
	}
	write(fd, arr, size + 1);
}
