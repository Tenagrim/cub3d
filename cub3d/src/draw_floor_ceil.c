/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_floor_ceil.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 19:05:43 by gshona            #+#    #+#             */
/*   Updated: 2020/12/05 19:53:04 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3d.h>

void	draw_floor(t_game *game)
{
	t_img		*img;
	int			c;
	t_intpair	coords;

	img = game->mlx->img;
	coords.y = game->settings->win_size->y / 2;
	while (coords.y < game->settings->win_size->y)
	{
		coords.x = 0;
		c = game->settings->floor_color;
		while (coords.x < game->settings->win_size->x)
		{
			img->data[coords.y * game->settings->win_size->x + coords.x] = c;
			coords.x++;
		}
		coords.y++;
	}
}

void	draw_ceil(t_game *game)
{
	t_img		*img;
	int			c;
	t_intpair	coords;

	img = game->mlx->img;
	coords.y = 0;
	while (coords.y < game->settings->win_size->y / 2)
	{
		coords.x = 0;
		c = game->settings->ceil_color;
		while (coords.x < game->settings->win_size->x)
		{
			img->data[coords.y * game->settings->win_size->x + coords.x] = c;
			coords.x++;
		}
		coords.y++;
	}
}
