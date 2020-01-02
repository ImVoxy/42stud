/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 13:24:58 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/02 16:20:32 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include "libft.h"


int		is_f(char c)
{
	char	*f;
	int		i;

	i = 0;
	f = "cspdiuxX-0.*";
	while (f[i])
	{
		if (c == f[i])
			return (1);
		i++;
	}
	return (0);
}

char	*get_printed(t_list **list)
{
	char	*str;

	str = NULL;
		while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}

	return (str);
}

int		flag_read(t_list **list, const char *str, int i, va_list ap)
{
	int		j;
	char	*f;
	char	*c;

	j = 0;
	if (str[i] == '%')
	{
		f = ft_substr(str, i, 1);
		ft_lstadd_back_bonus(list, ft_lstnew_bonus(f));
//		TBD(list, str, i, i);
		return (1);
	}
	while(is_f(str[i + j]))
		j++;
	c = va_arg(ap, char *);
	f = ft_substr(str, i, j);
	ft_lstadd_back_bonus(list, ft_lstnew_bonus(TBD(str, f, c)));
//	TBD2(list, str, c, f);
	return (j);
}

t_list	**get_listed(const char *str, va_list ap)
{
	int		i;
	int		j;
	char	*f;
	t_list	**list;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] != '%' && str[i + j])
			j++;
		TBD(list, str, i, j);
		i += j;
		i += flag_read(list, str, i, ap);
		while (is_f(str[i]))
			i++;
	}
	return (list);
}

int		ft_printf(const char *str, ...)
{
	char *tp;
	va_list	ap;

	va_start(ap, str);
	tp = get_printed(get_listed(str, ap));
	va_end(ap);
	return (ft_strlen(tp));
}
