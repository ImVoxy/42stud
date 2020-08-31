/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_utils_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <alpascal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 11:29:49 by alpascal          #+#    #+#             */
/*   Updated: 2020/05/27 17:36:56 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int		ft_atoi_index(const char *str, int *index)
{
	unsigned int nb;

	nb = 0;
	while (str[*index] >= '0' && str[*index] <= '9')
	{
		nb = (nb * 10) + (str[*index] - 48);
		(*index)++;
	}
	return (nb);
}

double	convert_radian(double nbr)
{
	return (nbr * (M_PI / 180));
}

float	mod(float a, float b)
{
	a -= b * fabs((float)((int)(a / b)));
	if (a >= 0)
		return (a);
	return (a + b);
}

void	ft_print_infos(t_info *infos)
{
	int i;

	i = 0;
	ft_printf("!!! Cub3D !!!\n");
	ft_printf("\n");
	ft_printf("Resolution: %d x %d pixels\n", infos->res_width,
															infos->res_height);
	ft_printf("Map size: %d x %d blocks\n", infos->map_width,
															infos->map_height);
	ft_printf("\n");
	while (i < infos->map_height)
	{
		ft_printf("%s\n", infos->map_content[i]);
		i++;
	}
	ft_printf("\n");
	ft_printf("Rendering Cub3D image...\n");
}

int		check_map_name(char *str)
{
	int i;

	i = ft_strlen(str) - 1;
	if (i < 5)
		return (0);
	if (str[i] != 'b' || str[i - 1] != 'u' || str[i - 2] != 'c' ||
			str[i - 3] != '.')
		return (0);
	return (1);
}
