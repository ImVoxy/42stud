/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 13:24:58 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/14 15:15:35 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_utils/ft_printf.h"

int		ft_get_printed(p_list *list)
{
	int		i;

	i = 0;
	while (list->next)
	{
		i += ft_putstrn(list->content);
		list = list->next;
	}
	if (list->content)
		i += ft_putstrn(list->content);
//	ft_lstfree(&list);
	return (i);
}

int		ft_flag_loop(p_list *list, char *str, char *c, va_list ap)
{
	int		i;
	int		j;
	int		*d;

	j = 0;
	i = 0;
	d = ft_flag_mem(str, ap);
	(str[i] == 'c' || str[i] == 's') ? (c = (ft_s_sol(ap, str[i], str, d))) : c;
	str[i] == 'p' ? (c = ft_p_sol(ap, str, d)) : c;
	(str[i] == 'd' || str[i] == 'i') ? (c = (ft_i_sol(ap, str, d))) : c;
	str[i] == 'u' ? (c = (ft_u_sol(ap, str, d))) : c;
	(str[i] == 'x' || str[i] == 'X') ? (c = ft_h_sol(ap, str[i], str, d)) : c;
	if (str[i] == 'c' || str[i] == 's' || str[i] == 'p' || str[i] == 'd'
	|| str[i] == 'i' || str[i] == 'u' || str[i] == 'x' || str[i] == 'X')
//	if (c)
		i++;
	ft_flag_reader(list, str, d);
	free(str);
	free(d);
	if (c)
		ft_plstadd_back(&list, ft_plstnew(c));
	return (i);
}

int		ft_get_next_flag(p_list *list, const char *str, int i, va_list ap)
{
	char	*f;
	char	*c;
	int		j;

	j = 1;
	i += 1;
	if (str[i] == '%')
	{
		f = ft_substr(str, i, i + 1);
		ft_plstadd_back(&list, ft_plstnew(f));
		return (2);
	}
	j += ft_flag_loop(list, ft_substr(str, i, ft_strlen(str)), c, ap);
	return (j);
}

p_list	*ft_get_listed(const char *str, va_list ap)
{
	int		i;
	int		j;
	p_list	*list;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] != '%' && str[i + j])
			j++;
//		if (j)
			ft_plstadd_back(&list, ft_plstnew(ft_substr(str, i, j)));
		i += j;
		str[i] ? i += ft_get_next_flag(list, str, i, ap) : i;
	}
	return (list);
}

int		ft_printf(const char *str, ...)
{
	int		len;
	va_list	ap;

	va_start(ap, str);
	len = ft_get_printed(ft_get_listed(str, ap));
	va_end(ap);
	return (len);
}
