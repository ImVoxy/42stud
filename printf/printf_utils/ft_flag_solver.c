/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_solver.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 14:09:44 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/14 14:41:39 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		*ft_flag_mem(char *str, va_list ap)
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
/*
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
*/
void	ft_flag_reader(p_list *list, char *str, int *d)
{
	int		i;
	int nb;

	nb = 0;
	i = 0;
	while (list->next)
		list = list->next;
	str[i++] = '0' ? list->flag = '0' : i--;
	str[i++] = '-' ? list->flag = '-' : i--;
	while (ft_isdigit(str[i]) || str[i] == '*')
	{
		if (str[i] == '*')
			nb = 1;
		i++;
	}
	if (str[i] == '*')
	{
		list->len = d[nb];
		i++;
	}
	if (ft_isdigit(str[i]))
		list->len = ft_atoi(&(str[i]));
	while (ft_isdigit(str[i]))
		i++;
	list->type = str[i];
}

void	ft_ready_to_print(p_list *list)
{
/*	while (list->next)
		list = list->next;
	if (list->flag != '-')
		ft_minus_str(list->content, list->type, list->len);
	{
	}
*/}

/*void	ft_minus_str(char *str, char type, int len_str)
{
	int len;
	char *tmp;

	len = ft_strlen(str);
	while (len >= 0 && len_str >= 0)
	{
		tmp = ft_strdup(str);
		str[len_str] = tmp[len];
		len_str--;
		len--;
	}
	while len
	while (len < len_str)
		str[len++] = ' ';
	free(tmp);
}*/
