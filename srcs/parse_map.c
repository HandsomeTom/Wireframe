/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 18:38:25 by tmaarela          #+#    #+#             */
/*   Updated: 2020/01/29 13:16:09 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

static int				file_width(char *mapfile)
{
	int		width;
	char	*tmp;
	char	**tmparr;
	int		fd;

	fd = open(mapfile, O_RDONLY);
	width = 0;
	get_next_line(fd, &tmp);
	tmparr = ft_strsplit(tmp, ' ');
	while (tmparr[width] != '\0')
	{
		free(tmparr[width]);
		width++;
	}
	free(tmparr[width]);
	close(fd);
	free(tmp);
	free(tmparr);
	return (width);
}

static void				check_legit_line(char *tmp, char *mapfile)
{
	int		i;
	char	**tmparr;

	i = 0;
	tmparr = ft_strsplit(tmp, ' ');
	while (tmparr[i] != '\0')
	{
		free(tmparr[i]);
		i++;
	}
	free(tmparr[i]);
	free(tmparr);
	if (i != file_width(mapfile))
	{
		ft_printf(COLOR_RED "Map is invalid. Exiting.\n" COLOR_RESET);
		exit(0);
	}
}

static int				file_height(char *mapfile)
{
	int		height;
	char	*tmp;
	int		fd;

	fd = open(mapfile, O_RDONLY);
	height = 0;
	while (get_next_line(fd, &tmp) > 0)
	{
		check_legit_line(tmp, mapfile);
		height++;
		free(tmp);
	}
	close(fd);
	free(tmp);
	return (height);
}

static t_map			store_coords(char *mapfile, int x, int y)
{
	char	*line;
	char	**array;
	int		fd;
	t_map	map;

	map = alloc_carray(file_height(mapfile), file_width(mapfile));
	fd = open(mapfile, O_RDONLY);
	while ((get_next_line(fd, &line)) > 0)
	{
		x = 0;
		array = ft_strsplit(line, ' ');
		while (x < map.width)
		{
			map.carray[y * map.width + x] = alloc_point(
				x, y, ft_atoi(array[x]));
			free(array[x]);
			x++;
		}
		free(array);
		free(line);
		y++;
	}
	close(fd);
	free(line);
	return (map);
}

t_map					parse_map(char *mapfile)
{
	t_map	map;

	map = store_coords(mapfile, 0, 0);
	return (map);
}
