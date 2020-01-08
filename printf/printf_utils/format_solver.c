/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 11:31:53 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/08 12:00:50 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*string_solver(va_list ap, char b)
{
	char *c;

	if (b == 's')
		return (c = ft_strdup(va_arg(ap, char *)));
	if (!(c = ft_calloc(1, 2)))
		return (NULL);
	c[0] = va_arg(ap, int);
	return (c);
	
}


char	*pointer_solver(va_list ap)
{
	char *base;
	char *c;

	base = "0123456789abcdef";
	return (c = ft_itoa_base(va_arg(ap, unsigned int), base));
}


char	*integer_solver(va_list ap)
{
	char *c;

	return (c = ft_strdup(ft_itoa(va_arg(ap, int))));
}


char	*hexa_solver(va_list ap, char b)
{
	char *base;
	char *c;

	if (b == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	return (c = ft_itoa_base(va_arg(ap, unsigned int), base));
}


char	*unsigned_solver(va_list ap)
{
	char *c;

	return (c = ft_strdup(ft_itoa(va_arg(ap, unsigned int))));
}
