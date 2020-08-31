/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_utils_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <alpascal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 11:13:43 by alpascal          #+#    #+#             */
/*   Updated: 2020/06/15 14:32:43 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	*create_img(t_window *game)
{
	t_data *img;

	if (!(img = ft_calloc(sizeof(t_data), 1)))
		return (NULL);
	img->img_ptr = mlx_new_image(game->mlx_ptr, game->infos->res_width,
													game->infos->res_height);
	img->addr = mlx_get_data_addr(img->img_ptr, &img->bits_per_pixel,
											&img->line_length, &img->endian);
	return (img);
}

t_info	*get_info(const char *str, t_window *game)
{
	int		fd;
	int		ret;
	int		i;
	char	*line;

	if (!(game->infos = ft_calloc(sizeof(t_info), 1)))
		return (NULL);
	if ((fd = open(str, O_RDWR)) < 0)
		return (NULL);
	ret = 1;
	i = 0;
	while (ret)
	{
		ret = get_next_line(fd, &line);
		ft_parse_line(line, game->infos, game->mlx_ptr);
		del_mem(line);
	}
	if (game->infos->map_content == NULL)
		init_map_content(str, game, game->infos);
	close(fd);
	return (game->infos);
}
