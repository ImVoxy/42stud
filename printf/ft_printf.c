/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 13:24:58 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/08 15:11:35 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_utils/ft_printf.h"

int		get_printed(t_list *list)
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

int		flag_loop(t_list *list, char *str, char *c, va_list ap)
{
	int		i;
	int		j;
	int		*d;
	int num;

	num = 0;
	j = 0;
	i = 0;
	while (str[i] == '-' || str[i] == '0' || str[i] == '.' || str[i] == '*')
	{
		str[i] == '*' ? num++ : num;
		i++;
	}
	d = flag_mem(str, ap, num);
	(str[i] == 'c' || str[i] == 's') ? (c = (string_solver(ap, str[i]))) : c;
	str[i] == 'p' ? (c = pointer_solver(ap)) : c;
	(str[i] == 'd' || str[i] == 'i') ? (c = (integer_solver(ap))) : c;
	str[i] == 'u' ? (c = (unsigned_solver(ap))) : c;
	(str[i] == 'x' || str[i] == 'X') ? (c = hexa_solver(ap, str[i])) : c;
	if (str[i] == 'c' || str[i] == 's' || str[i] == 'p' || str[i] == 'd'
	|| str[i] == 'i' || str[i] == 'u' || str[i] == 'x' || str[i] == 'X')
//	if (c)
		i++;
	flag_reader(list, str, d, num);
//	str[j++] == '-' ?  : j--;
//	str[j++] == '0' ?  : j--;
//	str[j++] == '.' ?  : j--;
//	str[j++] == '*' ?  : j--;
	free(str);
	if (c)
		ft_lstadd_back(&list, ft_lstnew(c));
	return (i);
}

int		get_next_flag(t_list *list, const char *str, int i, va_list ap)
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
	t_list	*list;

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
