/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_type2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:25:56 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/22 14:49:53 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p_type(t_list list, unsigned long nb)
{
	char	*tp;
	int		len;
	int		i;

	i = 13;
	len = 12;
	list.len > 12 ? len = list.len : 1;
	tp = ft_itoa_base(nb, 1, len, 12);
	len = ft_strlen(tp);
	if (list.flag != '-' && len > 14)
		while(i >= 0)
		{
			tp[len + ((i - 1) - 13)] = tp[i];
			tp[i] = ' ';
			i--;
		}
	i = 0;
	ft_putstr(tp, len);
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
	ft_putstr(tp, len);
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
	ft_putstr(tp, len);
	free(tp);
	return (len);
}
