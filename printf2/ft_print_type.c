/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:20:51 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/15 15:28:30 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_c_type(t_list list, char c)
{
	char	*tp;
	int		len;
	int		start;

	start = 0;
	len = 1;
	list.len > 0 ? len = list.len : 1;
	if (!(tp = malloc((len + 1) * sizeof(char))))
		return (-1);
	while (start < len)
		tp[start++] = ' ';
	tp[start] = '\0';
	list.flag == '-' ? start = 1 : 1;
	tp[start - 1] = c;
	ft_putstr(tp);
	free(tp);
	return (len);
}
/*
int	ft_s_type(t_list list, char *str)
{
}

int	ft_d_type(t_list list, int nb)
{
}

int	ft_i_type(t_list list, int nb)
{
}
*/
