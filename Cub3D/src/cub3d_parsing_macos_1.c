/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_parsing_macos_1.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <alpascal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 19:12:32 by alpascal          #+#    #+#             */
/*   Updated: 2020/06/11 13:14:30 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	ft_get_resolution(char *line, t_info *infos, void *mlx_ptr)
{
	int i;

	(void)mlx_ptr;
	i = 0;
	while (line[i])
	{
		if (line[i] == ' ')
			i++;
		if (line[i] >= '0' && line[i] <= '9')
		{
			if (infos->res_width > 0)
			{
				infos->res_height = fmin(ft_atoi_index(line, &i), 1440);
				break ;
			}
			else
				infos->res_width = fmin(ft_atoi_index(line, &i), 2560);
		}
		i++;
	}
}

void	ft_get_map_size(char *line, t_info *infos)
{
	int i;

	i = 0;
	while (line[i])
		i++;
	if (infos->map_width < i)
		infos->map_width = i;
	infos->map_height++;
}

void	ft_parse_line(char *line, t_info *infos, void *mlx_ptr)
{
	int i;

	i = 0;
	while (line[i] == ' ' || line[i] == '\t')
		i++;
	if (line[i] == 'R')
		ft_get_resolution(line, infos, mlx_ptr);
	else if (line[i] == 'N' || line[i] == 'S' || line[i] == 'W' ||
																line[i] == 'E')
		ft_get_texture(line, infos);
	else if (line[i] == 'F')
		get_floor_color(line, infos);
	else if (line[i] == 'C')
		get_ceil_color(line, infos);
	else if (line[i] == '1' || line[i] == '0')
	{
		ft_get_map_size(line, infos);
	}
	else if (line[i] == '\n')
		return ;
}

void	*init_map_content(const char *str, t_window *game, t_info *infos)
{
	int i;

	i = 0;
	if (!(infos->map_content = ft_calloc(sizeof(char*), infos->map_height + 1)))
		return (NULL);
	ft_fill_map(str, game, infos, &i);
	return (infos);
}

void	*ft_fill_map(const char *str, t_window *game, t_info *infos, int *i)
{
	int		ret;
	char	*line;
	int		fd;
	int		j;

	fd = open(str, O_RDONLY);
	ret = 1;
	while (ret)
	{
		j = 0;
		ret = get_next_line(fd, &line);
		while (line[j] == ' ' || line[j] == '\t')
			j++;
		if ((*i) != 0 && (*i) != infos->map_height
						&& infos->map_content[(*i) - 1] != 0 && line[j] == '\0')
			error_message(game, "Map parsing: invalid whitespaces or newline");
		if (line[j] == '1' || line[j] == '0')
			infos->map_content[(*i)++] = ft_strldup(infos->map_width, line);
		del_mem(line);
	}
	check_map_walls(game, infos);
	close(fd);
	return (infos);
}
