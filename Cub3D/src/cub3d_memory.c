/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <alpascal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 17:29:27 by alpascal          #+#    #+#             */
/*   Updated: 2020/06/01 18:15:58 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	free_map(t_window *game)
{
	int i;

	i = 0;
	while (i < game->infos->map_height)
	{
		del_mem(game->infos->map_content[i]);
		i++;
	}
	del_mem(game->infos->map_content);
}

void	free_textures(t_window *game)
{
	int i;

	i = 0;
	while (i < 8)
	{
		if (game->texture[i] != NULL && game->texture[i]->text_ptr != NULL)
			mlx_destroy_image(game->mlx_ptr, game->texture[i]->text_ptr);
		del_mem(game->texture[i]);
		i++;
	}
}
