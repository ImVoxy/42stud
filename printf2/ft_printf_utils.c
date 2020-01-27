/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 11:38:08 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/27 15:07:21 by alpascal         ###   ########.fr       */
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
	pre == -1 && ft_strlen(str) >= 6 ? pre = 6 : 1;
	pre == -1 ? pre = ft_strlen(str) : 1;
	nul = "(null)";
	i = 0;
	while (i < pre && i < 6 && nul[i])
	{
		str[i] = nul[i];
		i++;
	}
	return (i);
}

void	ft_reverse_tp(char *tp)
{
	char	c;
	int		i;
	int		pre;

	i = ft_strlen(tp) - 1;
	pre = 0;
	while (tp[pre] != ' ')
		pre++;
	pre--;
	if (i > pre)
		while (pre >= 0)
		{
			c = tp[i];
			tp[i] = tp[pre];
			tp[pre] = c;
			i--;
			pre--;
		}
}
