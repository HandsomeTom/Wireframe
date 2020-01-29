/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 17:33:17 by tmaarela          #+#    #+#             */
/*   Updated: 2020/01/29 13:16:34 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

static void	expand_c(t_xyz **carray, double width, double height, int mwidth)
{
	int		i;

	i = 0;
	while (carray[i])
	{
		carray[i]->x = (width * (i % mwidth));
		carray[i]->y = (i / mwidth) * height;
		i++;
	}
}

static void	line_coords(int i, t_prog prog, t_map map)
{
	t_line		ln;
	double		ln_width;
	double		ln_height;

	ln_width = SCREEN_W / map.width / (prog.zoom / 10);
	ln_height = SCREEN_H / map.height / (prog.zoom / 10);
	expand_c(map.carray, ln_width, ln_height, map.width);
	ln.xy1 = to_iso(map.carray[i], prog.zoom, prog.proj);
	if (i < map.width * map.height - 1)
	{
		ln.xy2 = to_iso(map.carray[i + 1 - ((i + 1) % map.width == 0)],
			prog.zoom, prog.proj);
		draw_line(&prog, ln.xy1, ln.xy2, 0x00FF80);
	}
	ln.xy1 = to_iso(map.carray[i], prog.zoom, prog.proj);
	if (i < (map.width * map.height - map.width))
	{
		ln.xy2 = to_iso(map.carray[i + map.width], prog.zoom, prog.proj);
		draw_line(&prog, ln.xy1, ln.xy2, 0x00FF80);
	}
}

int			draw_map(t_map map, t_prog prog)
{
	int		drawi;
	int		i;

	i = 0;
	drawi = (map.width) * (map.height);
	while (i < drawi)
	{
		line_coords(i, prog, map);
		i++;
	}
	mlx_clear_window(prog.mlx, prog.win);
	return (TRUE);
}
