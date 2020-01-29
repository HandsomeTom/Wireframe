/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:10:28 by tmaarela          #+#    #+#             */
/*   Updated: 2020/01/29 13:19:48 by tmaarela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		key_hook(int keycode, void *param)
{
	t_prog *p;

	p = param;
	if (keycode == 53)
		exit(0);
	if (keycode == 126)
		(*p).zoom -= ((*p).zoom > 16) ? 4 : 0;
	if (keycode == 125)
		(*p).zoom += ((*p).zoom < 512) ? 4 : 0;
	if (keycode == 0)
		(*p).offset.x -= 64;
	if (keycode == 2)
		(*p).offset.x += 64;
	if (keycode == 1)
		(*p).offset.y += 64;
	if (keycode == 13)
		(*p).offset.y -= 64;
	if (keycode == 15)
		(*p).zoom = 10.0;
	if (keycode == 35)
		(*p).proj += ((*p).proj == 4) ? -3 : 1;
	draw_map(p->map, *p);
	return (TRUE);
}

int		close_prog(void)
{
	exit(0);
}

int		main(int argc, char **argv)
{
	void		*mlx;
	void		*win;
	t_prog		mw;
	int			fd;

	if (argc != 2)
	{
		ft_printf(COLOR_RED "usage: ./fdf <mapfile>\n" COLOR_RESET);
		return (1);
	}
	mlx = mlx_init();
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		ft_printf(COLOR_RED "Invalid filename. Exiting.\n" COLOR_RESET);
		exit(0);
	}
	close(fd);
	mw.map = parse_map(argv[1]);
	win = mlx_new_window(mlx, SCREEN_W, SCREEN_H, "Windows Vista");
	mw = (t_prog){mlx, win, 32.0, (t_xy){0.0, 0.0}, (t_line){VEC2(0, 0),
		VEC2(0, 0), 0x000000}, mw.map, 1};
	mlx_hook(win, 17, 0, &close_prog, &mw);
	mlx_key_hook(win, &key_hook, &mw);
	mlx_loop(mlx);
}
