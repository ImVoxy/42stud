/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_events.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <alpascal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 11:23:58 by alpascal          #+#    #+#             */
/*   Updated: 2020/06/08 17:48:52 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int		key_release(int key_code, t_window *game)
{
	(void)key_code;
	game->key = 0;
	return (0);
}

int		quit_game(t_window *game)
{
	free_textures(game);
	if (game->infos != NULL)
	{
		free_map(game);
		del_mem(game->infos->no_text);
		del_mem(game->infos->so_text);
		del_mem(game->infos->we_text);
		del_mem(game->infos->ea_text);
		del_mem(game->infos->sprite_text);
	}
	del_mem(game->infos);
	del_mem(game->cam);
	if (game->win_ptr != NULL)
		mlx_destroy_window(game->mlx_ptr, game->win_ptr);
	del_mem(game->mlx_ptr);
	del_mem(game);
	ft_printf("Cub3D closed\n");
	exit(0);
}

int		exit_hook(t_window *game)
{
	quit_game(game);
	return (0);
}

int		deal_key(int key_code, t_window *game)
{
	if (key_code == 0xFF1B)
		quit_game(game);
	else if (key_code == 0x0061)
		game->key = MOVE_LEFT;
	else if (key_code == 0x0064)
		game->key = MOVE_RIGHT;
	else if (key_code == 0x0077 || key_code == 0xFF52)
		game->key = MOVE_UP;
	else if (key_code == 0x0073 || key_code == 0xFF54)
		game->key = MOVE_DOWN;
	else if (key_code == 0xFF51)
		game->key = LOOK_LEFT;
	else if (key_code == 0xFF53)
		game->key = LOOK_RIGHT;
	else if (key_code == 0x006d)
		game->key = OPEN_MAP;
	return (0);
}
