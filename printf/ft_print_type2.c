/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_type2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:25:56 by alpascal          #+#    #+#             */
/*   Updated: 2020/02/10 14:07:45 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p_type(t_list list, unsigned long nb)
{
	char	*tp;
	int		len;
	int		i;
	int		j;

	if (!nb)
		return (ft_print_nul_p(list));
	j = 0;
	len = ft_get_len_h(nb, list, 16, 1) + 2;
	list.len > len ? len = list.len : len;
	i = len - 1;
	tp = ft_itoa_base((long int)nb, 1, len, 13);
	while (tp[j] != ' ' && tp[j])
		j++;
	(j != 0) ? j-- : j;
	if (list.flag != '-' && i > j)
		while (i >= 0 && tp[j] && j >= 0)
		{
			tp[i--] = tp[j];
			tp[j--] = ' ';
		}
	ft_putstr(tp);
	free(tp);
	return (ft_strlen(tp));
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

	i = ft_get_len_h(nb, list, 16, 0);
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

int	ft_xx_type(t_list list, unsigned int nb)
{
	char	*tp;
	int		len;
	int		i;
	int		j;

	i = ft_get_len_h(nb, list, 16, 0);
	len = i;
	list.len > len ? len = list.len : 1;
	tp = ft_itoa_base(nb, 0, len, i + 1);
	len = ft_strlen(tp);
	j = len - 1;
	i -= 1;
	if (list.flag != '-' && j > i)
		while (i >= 0)
		{
			tp[j--] = tp[i];
			tp[i--] = ' ';
		}
	i = -1;
	while (tp[++i])
		tp[i] = ft_toupper(tp[i]);
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
		write(1, " ", 1);
		len++;
	}
	return (len + list.pre);
}
