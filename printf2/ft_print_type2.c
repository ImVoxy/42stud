/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_type2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:25:56 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/20 11:43:28 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p_type(t_list list, unsigned long nb)
{
	char	*tp;
	char	*base;
	int		len;
	int		i;

	i = 13;
	base = "0123456789abcdef";
	len = 12;
	list.len > 12 ? len = list.len : 1;
	tp = ft_itoa_base(nb, base, 1, len);
	len = ft_strlen(tp);
	if (list.flag != '-' && len > 14)
		while(i >= 0)
		{
			tp[len + ((i - 1) - 13)] = tp[i];
			tp[i] = ' ';
			i--;
		}
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
}

int	ft_X_type(t_list list, unsigned int nb)
{
}
