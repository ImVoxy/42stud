/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:38:44 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/22 13:25:07 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_atoi2(const char **str)
{
	int					val;

	val = 0;
	while (**str >= '0' && **str <= '9')
	{
		val = val * 10 + **str - '0';
		*str += 1;
	}
	return (val);
}
