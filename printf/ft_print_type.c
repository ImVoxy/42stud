/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:20:51 by alpascal          #+#    #+#             */
/*   Updated: 2020/02/10 14:14:23 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_c_type(t_list list, int c)
{
	int		len;
	int		i;

	i = 1;
	len = 1;
	list.len > 0 ? len = list.len : 1;
	if (list.flag == '-')
		write(1, &c, 1);
	while (i++ < len)
		write(1, " ", 1);
	if (list.flag != '-')
		write(1, &c, 1);
	return (len);
}

int	ft_s_type(t_list list, char *str)
{
	char	*tp;
	int		len;
	int		pre;
	int		i;

	i = -1;
	list.size = ft_strlen(str);
	len = list.len;
	pre = list.pre;
	pre == -1 || pre > list.size ? pre = list.size : pre;
	len < pre ? len = pre : len;
	if (!(tp = ft_callocs((len + 1), sizeof(char))))
		return (-1);
	if (str)
		while (++i < pre && i < len && str[i])
			tp[i] = str[i];
	else
		ft_null(tp, list);
	if (list.flag != '-')
		ft_reverse_tp(tp, pre - 1);
	ft_putstr(tp);
	free(tp);
	return (len);
}

int	ft_d_type(t_list list, char *tp)
{
	int		len;
	int		start;
	int		i;

	len = ft_strlen(tp);
	i = len - 1;
	start = 0;
	while (tp[start] && tp[start] != ' ')
		start++;
	start > 0 ? start-- : 1;
	if (list.flag != '-')
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
