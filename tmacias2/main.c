/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 19:32:09 by tmacias           #+#    #+#             */
/*   Updated: 2019/12/14 20:30:57 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

/*
void myfunction2(int *tmp)
{
	*tmp = 3;
}

void myfunction(int tmp)
{
	tmp = 3;
}

int main(void)
{

	int tmp;
	tmp = 2;
	printf("original: %d\n", tmp);
	myfunction(tmp);
	printf("after first function: %d\n", tmp);
	myfunction2(&tmp);
	printf("after second function: %d\n", tmp);
	return (0);
}

& = MAKE SHORTCUT TO
* = USE VALUE SHORTCUT REFERENCES
*/

int	main(int ac, char **av)
{
/*
	char	*tmp = "hello world";
			*tmp = 'h';
			tmp++;
			*tmp = 'e';

	char	*tmp2;
	tmp2 = 	tmp;


	char	**tmp_ptr = &tmp;
			*tmp_ptr = tmp;

	char	***tmp_ptr_ptr = &tmp_ptr;

	char	*line;

	

	char	*line;


	char	**line_ptr = &line;
	*/
	char	*line = NULL;
	int		fd;
	int		i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			if ((fd = open(av[i++], O_RDONLY)) < 1)
				continue ;
			while (get_next_line(fd, &line) > 0)
			{
				printf("%s\n", line);
				free(line);
				line = NULL;
			}
			close(fd);
		}
	}
	return(0);
}

