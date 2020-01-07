/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 11:31:53 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/07 16:04:38 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*char_solver(va_list ap)
{
	char *c;

	return (c = ft_strdup(va_arg(ap, char *)));
}

char	*string_solver(va_list ap)
{
	char *c;

	return (c = ft_strdup(va_arg(ap, char *)));
}

/*
void	pointer_solver(char *c, va_list ap)
{
	char *base;

	base = "0123456789abcdef";
	c = ft_itoa_base(va_arg(ap, long int), base);
}
*/
char	*decimal_solver(va_list ap)
{
	char *c;

	return (c = ft_strdup(ft_itoa(va_arg(ap, int))));
}

char	*integer_solver(va_list ap)
{
	char *c;

	return (c = ft_strdup(ft_itoa(va_arg(ap, int))));
}
