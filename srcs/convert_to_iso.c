/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_iso.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:31:10 by tmaarela          #+#    #+#             */
/*   Updated: 2020/01/29 12:04:08 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Convert the XYZ coordinates from t_xyz to 2D pixel coordinates
** before drawing the final line to the screen
*/

#include "../fdf.h"

t_xy		to_iso(t_xyz *xyz, double zoom, int proj)
{
	if (proj == 1)
	{
		return ((t_xy){
			(SCREEN_W / 2 + xyz->x * (xyz->y / 200) - xyz->y),
			(SCREEN_H / 2 + xyz->y - xyz->z * (xyz->y / 40))
		});
	}
	else if (proj == 2)
	{
		return ((t_xy){
		(SCREEN_W / 2 + xyz->x - xyz->y),
		(SCREEN_H / 2 + (xyz->y / (zoom / 32)) - xyz->z * ((SCREEN_H / 4) /
			(fabs(zoom) + 1)))
		});
	}
	else if (proj == 3)
	{
		return ((t_xy){
		(xyz->x - xyz->z) / sqrt(2),
		(xyz->x + (xyz->y * 2) + xyz->z * 10) / sqrt(6)
		});
	}
	return ((t_xy){xyz->x, xyz->y});
}
