/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate_file_struct.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:42:46 by tmaarela          #+#    #+#             */
/*   Updated: 2020/01/22 15:43:07 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

t_xyz			*alloc_point(double x, double y, double z)
{
	t_xyz *coords;

	if (!(coords = malloc(sizeof(t_xyz))))
		return (NULL);
	coords->x = x;
	coords->y = y;
	coords->z = z;
	return (coords);
}

t_map			alloc_carray(int height, int width)
{
	t_map	map;

	map.width = width;
	map.height = height;
	map.carray = malloc(sizeof(t_xyz) * ((width * height) + 1));
	map.carray[width * height] = NULL;
	return (map);
}
