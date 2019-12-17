/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 20:01:59 by tmacias           #+#    #+#             */
/*   Updated: 2019/12/14 23:31:26 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	gnl_helper(int res, char **ln, char **line, int fd)
{
	char	*tmp;
	int		end;

	tmp = NULL;
	if (res == -1)
		return (-1);
	if (!res && !ln[fd])
		return (0);
	end = ft_strlchr(ln[fd], '\n');
	if (end >= 0)
	{
		*line = ft_strsub(ln[fd], 0, end);
		if (ln[fd] && ln[fd][end + 1])
			tmp = ft_strdup(ft_strchr(ln[fd], '\n') + 1);
		free(ln[fd]);
		ln[fd] = tmp;
	}
	else if (res == 0)
	{
		*line = ft_strdup(ln[fd]);
		free(ln[fd]);
		ln[fd] = NULL;
	}
	return (1);
}

int	get_next_line(const int fd, char **line)
{
	static char	*ln[MAX_FD + 1] = { NULL };
	char		buf[BUFF_SIZE + 1];
	char		*tmp;
	int			res;

	if (fd < 0 || fd > MAX_FD)
		return (-1);
	if (ft_strchr(ln[fd], '\n'))
		return (gnl_helper(1, ln, line, fd));
	while ((res = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[res] = 0;
		if (ln[fd] != NULL)
		{
			tmp = ln[fd];
			ln[fd] = ft_strjoin(ln[fd], buf);
			free(tmp);
		}
		else
			ln[fd] = ft_strdup(buf);
		if (ft_strchr(ln[fd], '\n'))
			break ;
	}
	return (gnl_helper(res, ln, line, fd));
}
