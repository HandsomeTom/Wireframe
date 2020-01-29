/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:42:12 by tmaarela          #+#    #+#             */
/*   Updated: 2020/01/15 15:22:17 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** get_next_line(file descriptor, output)
** Read the given fd BYTE_SIZE times per iteration,
** search for a newline in the buffer. On success
** call ft_new_line to essentially "cut" the line
** to the output (**line)
*/

#define BUFF_SIZE 1
#define FD_SIZE 4096
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

static int		ft_new_line(char *stack[], char **line, int fd)
{
	char	*tmp;
	int		i;

	i = 0;
	while (stack[fd][i] != '\n' && stack[fd][i] != '\0')
		i++;
	if (stack[fd][i] == '\n')
	{
		*line = ft_strsub(stack[fd], 0, i);
		tmp = ft_strdup(stack[fd] + i + 1);
		free(stack[fd]);
		stack[fd] = tmp;
	}
	else
	{
		*line = ft_strdup(stack[fd]);
		ft_strdel(&stack[fd]);
		if (i == 0)
			return (0);
	}
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static char	*stack[FD_SIZE];
	char		buf[BUFF_SIZE + 1];
	char		*tmp;
	int			ret;

	if (fd < 0 || line == NULL || fd > FD_SIZE)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (stack[fd] == NULL)
			stack[fd] = ft_strnew(0);
		tmp = ft_strjoin(stack[fd], buf);
		free(stack[fd]);
		stack[fd] = tmp;
		if (ft_strchr(stack[fd], '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	if (ret == 0 && (stack[fd] == NULL || stack[fd] == '\0'))
		return ((int)(*line = NULL));
	return (ft_new_line(stack, line, fd));
}
