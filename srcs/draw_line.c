/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 16:19:32 by tmaarela          #+#    #+#             */
/*   Updated: 2020/01/29 12:58:30 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

int					draw_line(t_prog *p, t_xy start, t_xy end, int color)
{
	t_xy	length;
	t_xy	ratio;
	int		pixels;
	t_xy	pos;
	t_xy	sign;

	length = VEC2(fabs(end.x - start.x), fabs(end.y - start.y));
	pixels = (length.x > length.y) ? (length.x) : (length.y);
	ratio.x = (start.y != end.y) ? (length.x / length.y) : 1;
	ratio.y = (start.x != end.x) ? (length.y / length.x) : 1;
	ratio.x = (ratio.x > ratio.y) ? 1 : (ratio.x);
	ratio.y = (ratio.y > ratio.x) ? 1 : (ratio.y);
	sign.x = (start.x < end.x) ? 1 : -1;
	sign.y = (start.y < end.y) ? 1 : -1;
	pos.x = start.x;
	pos.y = start.y;
	while (pixels--)
	{
		mlx_pixel_put(p->mlx, p->win, (int)pos.x + p->offset.x,
			(int)pos.y + p->offset.y, color);
		pos.x += ratio.x * sign.x;
		pos.y += ratio.y * sign.y;
	}
	return (TRUE);
}
