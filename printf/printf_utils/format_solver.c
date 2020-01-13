/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 11:31:53 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/13 12:01:36 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*s_solver(va_list ap, char b, char *str, int *d)
{
	char	*c;
	int		len;

	len = get_len(str, b, d);
	if (b == 's')
		return (c = ft_strdupl(va_arg(ap, char *), len));
	if (!(c = ft_calloc(1, len + 1)))
		return (NULL);
	c[0] = va_arg(ap, int);
	return (c);
	
}


char	*p_solver(va_list ap, char *str, int *d)
{
	char	*base;
	char	*c;
	int		len;

	len = get_len(str, 'p', d);
	base = "0123456789abcdef";
	return (c = ft_itoa_base(va_arg(ap, unsigned long), base, 1, len));
}


char	*i_solver(va_list ap, char *str, int *d)
{
	char	*c;
	int		len;

	len = get_len(str, 'i', d);
	return (c = ft_strdupl(ft_itoa(va_arg(ap, int)), len));
}


char	*h_solver(va_list ap, char b, char *str, int *d)
{
	char	*base;
	char	*c;
	int		len;

	len = get_len(str, b, d);
	if (b == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	return (c = ft_itoa_base(va_arg(ap, unsigned int), base, 0, len));
}


char	*u_solver(va_list ap, char *str, int *d)
{
	char	*c;
	int		len;

	len = get_len(str, 'u', d);
	return (c = ft_strdupl(ft_itoa(va_arg(ap, unsigned int)), len));
}
