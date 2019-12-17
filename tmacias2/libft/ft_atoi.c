/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 19:19:12 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/21 19:06:03 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int		i;
	int		result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\r') ||
			(str[i] == '\f') || (str[i] == '\t') || (str[i] == '\v'))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
		sign = str[i++] == '-' ? -1 : 1;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * sign);
}
