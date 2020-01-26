/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 11:38:08 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/22 15:56:20 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_get_len_d(int n, t_list list, int base)
{
	int	i;

	i = 0;
	n < 0 ? i++ : i;
	while (n /= base)
		i++;
	i++;
	list.len > i ? i = list.len : i;
	list.pre > i ? i = list.pre : i;
	return (i);
}

int		ft_get_len_h(unsigned int n, t_list list, int base)
{
	int i;

	i = 0;
	while (n /= base)
		i++;
	i++;
	list.pre > i ? i = list.pre : i;
	return (i);
}

int		ft_null(char *str, t_list list)
{
	int		i;
	char	*nul;
	int		pre;

	pre = list.pre;
	pre == -1 && list.len > 6 ? pre = 6 : 1;
	(list.len < 6 && list.len > -1  && list.len > pre) ? pre = list.len : 1;
	nul = "(null)";
	i = 0;
	if (pre < 6 && pre != -1)
	{
		str[0] = ' ';
		return (pre);
	}
	while (i < pre + 1 && i < 6 && i < list.len)
	{
		str[i] = nul[i];
		i++;
	}
	return (i);
}

void	ft_reverse_tp(char *tp, t_list list)
{

}
