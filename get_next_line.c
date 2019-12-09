/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 20:01:59 by tmacias           #+#    #+#             */
/*   Updated: 2019/12/08 20:45:17 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(const int fd, char **line)
{
	static char	*ln[MAX_FD] = { NULL };
	char		buf[BUFF_SIZE + 1];
	int			end;
	int			res;
	char		*tmp;

	tmp = NULL;
	if (fd < 0 || line == NULL)
		return (-1);
	ft_memset(buf, 0, BUFF_SIZE + 1);
	while ((res = read(fd, buf, BUFF_SIZE)) > 0)
	{
		if (ln[fd] != NULL)
			ln[fd] = ft_strjoin(ln[fd], buf);
		else
			ln[fd] = ft_strdup(buf);
		if (ft_strchr(ln[fd], '\n'))
			break ;
		ft_memset(buf, 0, BUFF_SIZE + 1);
	}
	if (res == -1)
		return (-1);
	if (!res && !ln[fd])
		return (0);
	end = ft_strlchr(ln[fd], '\n');
	if (end > -1)
	{
		*line = ft_strsub(ln[fd], 0, end);
		if (!(end + 1 == (int)ft_strlen(ln[fd])))
			tmp = ft_strdup(ft_strchr(ln[fd], '\n') + 1);
		free(ln[fd]);
		ln[fd] = tmp;
	}
	else if (res == 0)
	{
		*line = ln[fd];
		ln[fd] = NULL;
	}
	return (1);
}
