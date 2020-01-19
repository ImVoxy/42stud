/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 11:38:08 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/15 13:32:01 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_len_d(int n, t_list list)
{
	int	i;

	i = 0;
	n < 0 ? i++ : i;
	while (n /= 10)
		i++;
	i++;
	list.len > i ? i = list.len : i;
	list.pre > i ? i = list.pre : i;
	return (i);
}
