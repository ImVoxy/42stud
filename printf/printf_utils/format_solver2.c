/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_solver2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 11:42:53 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/07 13:52:57 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
void	hexa_solver(char *c, va_list ap)
{
	char *base;

	base = "0123456789abcdef";
	c = ft_itoa_base(va_arg(ap, unsigned int), base);
}

void	hexa_up_solver(char *c, va_list ap)
{
	char *base;

	base = "0123456789ABCDEF";
	c = ft_itoa_base(va_arg(ap, unsigned int), base);
}
*/

char	*unsigned_solver(va_list ap)
{
	char *c;

	return (c = ft_strdup(ft_itoa(va_arg(ap, unsigned int))));
}
