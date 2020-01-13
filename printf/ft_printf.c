/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 13:24:58 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/13 15:29:29 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_utils/ft_printf.h"

int		get_printed(p_list *list)
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

int		flag_loop(p_list *list, char *str, char *c, va_list ap)
{
	int		i;
	int		j;
	int		*d;

	j = 0;
	i = 0;
	d = flag_mem(str, ap);
	(str[i] == 'c' || str[i] == 's') ? (c = (s_solver(ap, str[i], str, d))) : c;
	str[i] == 'p' ? (c = p_solver(ap, str, d)) : c;
	(str[i] == 'd' || str[i] == 'i') ? (c = (i_solver(ap, str, d))) : c;
	str[i] == 'u' ? (c = (u_solver(ap, str, d))) : c;
	(str[i] == 'x' || str[i] == 'X') ? (c = h_solver(ap, str[i], str, d)) : c;
	if (str[i] == 'c' || str[i] == 's' || str[i] == 'p' || str[i] == 'd'
	|| str[i] == 'i' || str[i] == 'u' || str[i] == 'x' || str[i] == 'X')
//	if (c)
		i++;
	flag_reader(list, str, d);
	free(str);
	if (c)
		ft_lstadd_back(&list, ft_lstnew(c));
	return (i);
}

int		get_next_flag(p_list *list, const char *str, int i, va_list ap)
{
	char	*f;
	char	*c;
	int		j;

	j = 1;
	i += 1;
	if (str[i] == '%')
	{
		f = ft_substr(str, i, i + 1);
		ft_lstadd_back(&list, ft_lstnew(f));
		return (2);
	}
	j += flag_loop(list, ft_substr(str, i, ft_strlen(str)), c, ap);
	return (j);
}

t_list	*get_listed(const char *str, va_list ap)
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
			ft_lstadd_back(&list, ft_lstnew(ft_substr(str, i, j)));
		i += j;
		str[i] ? i += get_next_flag(list, str, i, ap) : i;
	}
	return (list);
}

int		ft_printf(const char *str, ...)
{
	int		len;
	va_list	ap;

	va_start(ap, str);
	len = get_printed(get_listed(str, ap));
	va_end(ap);
	return (len);
}
