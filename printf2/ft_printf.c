/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 09:50:32 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/16 15:34:11 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_is_in(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
		|| c ==  'x' || c == 'X')
		return (1);
	return (0);
}

void	ft_init_list(t_list *list)
{
	list->type = '0';
	list->flag = '+';
	list->len = -1;
	list->pre = -1;
}

t_list	ft_get_listed(va_list ap, const char **str)
{
	t_list list;

	ft_init_list(&list);
	if (**str == '0' || **str == '-')
	{
		list.flag = **str;
		*str += 1;
	}
	(**str == '0' || **str == '-') ? list.flag = *(*str++) : 1;
	if (ft_isdigit(**str))
		list.len = ft_atoi(str);
	else if (**str == '*')
	{
		list.len = va_arg(ap, int);
		*str += 1;
	}
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
	return (list);
}

int		ft_print_it(va_list ap, const char **str)
{
	int		len;
	t_list	list;

	len = 0;
	list = ft_get_listed(ap, str);
	list.type == 'c' ? len += ft_c_type(list, va_arg(ap, int)) : 1;
	list.type == 's' ? len += ft_s_type(list, va_arg(ap, char *)) : 1;
//	list.type == 'p' ? len += ft_p_type(list, va_arg(ap, unsigned int)) : 1;
	list.type == 'd' ? len += ft_d_type(list, ft_itoal(va_arg(ap, int), list)) : 1;
	list.type == 'i' ? len += ft_i_type(list, ft_itoal(va_arg(ap, int), list)) : 1;
/*	list.type == 'u' ? len += ft_u_type(list, va_arg(ap, unsigned int)) : 1;
	list.type == 'x' ? len += ft_x_type(list, va_arg(ap, unsigned int)) : 1;
	list.type == 'X' ? len += ft_X_type(list, va_arg(ap, unsigned int)) : 1;
*/	return (len);
}

int		ft_printf(const char *str, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	va_start(ap, str);
	while (*str)
	{
		while (*str && *str != '%')
		{
			write(1, str++, 1);
			len++;
		}
		if (*str == '%' && *(str + 1) == '%')
		{
			write(1, "%", 1);
			len++;
			str += 2;
		}
		else if (*(str) == '%')
		{
			str++;
			len += ft_print_it(ap, &str);
		}
	}
	va_end(ap);
	return (len);
}