/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_solver.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 15:42:57 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/13 15:21:53 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		*flag_mem(char *str, va_list ap)
{
	int i;
	int ind;
	int *mem;

	ind = 0;
	i = 0;
	if (!(mem = ft_calloc(sizeof(int), 3)))
		return (mem = malloc(0));
	while ((str[i] == '-' || str[i] == '0' || str[i] == '.' || str[i] == '*'
		|| ft_isdigit(str[i])) && ind <= 1)
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

int		is_minus(char *str)
{
	int i;

	i = 0;
	while (str[i] && (str[i] != 'c' || str[i] != 'p' || str[i] != 'd' 
		|| str[i] != 'i' || str[i] != 'u' || str[i] != 'x' || str[i] != 'X'))
		{
			if (str[i] == '-')
				return (1);
			i++;
		}
		return (0);
}

void	flag_reader(t_list *list, char *str, int *d)
{
	int		i;
	int		len;
	int		len_str;
	char	*tmp;

	len = 0;
	len_str = ft_strlen(str);
	i = 0;
	while (str[len] && str[len] != ' ')
		len++;
	if (!(is_minus(str)))
	{
		while (len >= 0)
		{
			tmp = ft_strdup(str);
			str[len_str] = tmp[len];
			len_str--;
			len--;
		}
		free(tmp);
	}
	while (str[i] == '-' || str[i] == '0' || str[i] == '.' || str[i] == '*'
		|| ft_isdigit(str[i]))
	{
		if (str[i] == '0' && (str!(ft_isdigit(str[i - 1])) && !(is_minus(str)))
		{
				;
		}
		if (str[i] == '.')
		{
		}
	}
}
