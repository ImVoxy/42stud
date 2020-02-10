/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 11:38:08 by alpascal          #+#    #+#             */
/*   Updated: 2020/02/10 14:13:51 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_get_len_d(long int n, t_list list, int base)
{
	int	i;
	int	s;

	i = 0;
	n < 0 ? i++ : i;
	s = i;
	if ((n < 10 && n > 0) || (n == 0 && list.pre != 0))
		i++;
	while (n /= base)
	{
		i++;
		if (n > 0 && n < 10)
			i++;
	}
	if (list.pre >= i)
		i = list.pre;
	i += s;
	list.len > i ? i = list.len : i;
	return (i);
}

int		ft_get_len_h(unsigned long n, t_list list, int base, int test)
{
	int i;

	i = 0;
	if (list.pre == 0 && n == 0 && !test)
		return (0);
	while (n /= base)
		i++;
	i++;
	if (!test)
		(list.pre < 0 && list.flag != '-' && list.pre > i) ||
	(list.pre < 0 && list.flag == '0') ? list.pre = list.len : list.pre;
	i < list.pre ? i = list.pre : i;
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

void	ft_reverse_tp(char *tp, int size)
{
	char	c;
	int		i;
	int		pre;

	i = ft_strlen(tp) - 1;
	pre = size;
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

t_list	ft_still_listed(va_list ap, const char **str, t_list list)
{
	if (**str == '.')
	{
		list.pre = 0;
		if (ft_isdigit(*(++*str)))
			list.pre = ft_atoi(str);
		else if (**str == '*')
		{
			list.pre = va_arg(ap, int);
			*str += 1;
		}
	}
	if (ft_is_in(**str))
	{
		list.type = **str;
		*str += 1;
	}
	if (list.pre < 0)
		list.pre = -1;
	return (list);
}
