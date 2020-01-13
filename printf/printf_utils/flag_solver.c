/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_solver.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 15:42:57 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/08 15:11:32 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		*flag_mem(char *str, va_list ap, int num)
{
	int i;
	int ind;
	int *mem;

	ind = 0;
	i = 0;
	if (!(mem = ft_calloc(sizeof(int), num + 1)))
		return (mem = malloc(0));
	while (str[i] == '-' || str[i] == '0' || str[i] == '.' || str[i] == '*')
	{
		if (str[i] == '*')
		{
			mem[ind] = va_arg(ap, int);
			ind++;
		}
		i++;
	}
	return (mem);
}

void	flag_reader(t_list *list, char *str, int *d, int num)
{
	int	i;

	i = 0;
	while (str[i] == '-' || str[i] == '0' || str[i] == '.' || str[i] == '*')
	{
		str[i++] == '0' ? a = 1 : i--;
		str[i++] == '-' ? s = 1 : i--;
		str[i++] == '.' ? i += : i--;
	}
}
