/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:20:51 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/16 15:26:46 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

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

int	ft_s_type(t_list list, char *str)
{
	char	*tp;
	int		len;
	int		start;
	int		i;

	i = 0;
	start = 0;
	list.len > 0 ? len = list.len : 1;
	list.pre == -1 ? list.pre = ft_strlen(str) : 1;
	len = list.pre;
	list.len > 0 ? len = list.len : 1;
	if (!(tp = malloc((len + 1) * sizeof(char))))
		return (-1);
	while (start < len)
		tp[start++] = ' ';
	tp[start] = '\0';
	start -= list.pre - 1;
	list.flag == '-' ? start = 1 : 1;
	while (i < list.pre && str[i] && tp[start - 1])
		tp[(start++) - 1] = str[i++];
	ft_putstr(tp);
	free(tp);
	return (len);
}

int	ft_d_type(t_list list, char *tp)
{
	int		len;
	int		start;
	int		i;
	char	s;

	len = ft_strlen(tp);
	i = len - 1;
	start = 0;
	while (tp[start] && tp[start] != ' ')
		start++;
	start > 0 ? start -- : 1;
	if (list.flag == '+')
	{
		while (start >= 0 && i >= 0)
			tp[i--] = tp[start--];
		while (i >= 0)
			tp[i--] = ' ';
	}
	ft_putstr(tp);
	free(tp);
	return (len);
}

int	ft_i_type(t_list list, char *nb)
{
	return (ft_d_type(list, nb));
}
