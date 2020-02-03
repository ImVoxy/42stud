/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_type2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:25:56 by alpascal          #+#    #+#             */
/*   Updated: 2020/02/03 12:29:52 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_p_type(t_list list, unsigned long nb)
{
	char	*tp;
	int		len;
	int		i;
	int		j;

	if (!nb)
		return (ft_print_nul_p(list));
	j = 0;
	len = list.len;
	if (nb && len < 14)
		len = 14;
	i = len - 1;
	tp = ft_itoa_base((long int)nb, 1, len, 13);
	len = ft_strlen(tp);
	while (tp[j] != ' ' && tp[j])
		j++;
	if (j)
		j--;
	if (list.flag != '-' && i > j)
		while (i >= 0 && tp[j] && j >= 0)
		{
			tp[i] = tp[j];
			tp[j] = ' ';
			j--;
			i--;
		}
	i = 0;
	ft_putstr(tp);
	free(tp);
	return (len);
}

int	ft_u_type(t_list list, char *nb)
{
	return (ft_d_type(list, nb));
}

int	ft_x_type(t_list list, unsigned int nb)
{
	char	*tp;
	int		len;
	int		i;
	int		j;

//	list.pre == -1 ? list.pre = 0 : list.pre;
	i = ft_get_len_h(nb, list, 16);
	len = i;
	list.len > len ? len = list.len : 1;
	(list.pre > len) && (list.flag == 0) ? len = list.pre - 1 : len;
	tp = ft_itoa_base(nb, 0, len, i + 1);
	len = ft_strlen(tp);
	j = len - 1;
	i -= 1;
	if (list.flag != '-' && j > i)
		while (i >= 0 && j >= 0 && tp[j])
		{
			tp[j] = tp[i];
			tp[i] = ' ';
			i--;
			j--;
		}
	ft_putstr(tp);
	free(tp);
	return (len);
}

int	ft_X_type(t_list list, unsigned int nb)
{
	char	*tp;
	int		len;
	int		i;
	int		j;

	i = ft_get_len_h(nb, list, 16);
	len = i;
	list.len > len ? len = list.len : 1;
	tp = ft_itoa_base(nb, 0, len, i + 1);
	len = ft_strlen(tp);
	j = len - 1;
	i -= 1;
	if (list.flag != '-' && j > i)
		while(i >= 0)
		{
			tp[j] = tp[i];
			tp[i] = ' ';
			i--;
			j--;
		}
	i = 0;
	while (tp[i])
	{
		tp[i] = ft_toupper(tp[i]);
		i++;
	}
	ft_putstr(tp);
	free(tp);
	return (len);
}

int	ft_print_nul_p(t_list list)
{
	int	len;

	len = 2;
	if (list.pre != 0)
		list.pre = 1;
	if (list.len < 3 && list.pre != 0)
	{
		write(1, "0x0", 3);
		return (3);
	}
	while (list.flag != '-' && len + list.pre < list.len)
	{
		len++;
		write(1, " ", 1);
	}
	write(1, "0x", 2);
	if (list.pre)
		write(1, "0", 1);
	while (len + list.pre < list.len)
	{
		write (1, " ", 1);
		len++;
	}
	return (len + list.pre);
}
