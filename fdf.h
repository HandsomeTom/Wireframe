/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:55:28 by tmaarela          #+#    #+#             */
/*   Updated: 2020/01/29 13:10:57 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define SCREEN_W 1440
# define SCREEN_H 720
# define TRUE 1
# define FALSE 0
# define VEC2(a,b) (t_xy){a, b}
# include "libft/libft.h"
# include "ft_printf.h"
# include "mlx.h"
# include <math.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct			s_xy
{
	double x;
	double y;
}						t_xy;

typedef struct			s_xyz
{
	double x;
	double y;
	double z;
}						t_xyz;

typedef struct			s_line
{
	t_xy	xy1;
	t_xy	xy2;
	int		color;
}						t_line;

typedef struct			s_map
{
	t_xyz	**carray;
	int		width;
	int		height;
}						t_map;

typedef struct			s_prog
{
	void		*mlx;
	void		*win;
	double		zoom;
	t_xy		offset;
	t_line		ln;
	t_map		map;
	int			proj;
}						t_prog;

int						draw_line(t_prog *p, t_xy start, t_xy end, int color);
t_map					parse_map(char *mapfile);
int						draw_map(t_map map, t_prog prog);
t_xy					to_iso(t_xyz *xyz, double zoom, int proj);
t_xyz					*alloc_point(double x, double y, double z);
t_map					alloc_carray(int height, int width);

#endif
