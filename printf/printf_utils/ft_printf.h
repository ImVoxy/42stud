/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 15:28:58 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/08 15:02:19 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft.h"
# include <stdarg.h>

int		get_printed(t_list *list);
int		flag_loop(t_list *list, char *str, char *c, va_list ap);
int		get_next_flag(t_list *list, const char *str, int i, va_list ap);
int		*flag_mem(char *str, va_list ap, int num);

char	*string_solver(va_list ap, char b);
char	*pointer_solver(va_list ap);
char	*integer_solver(va_list ap);
char	*unsigned_solver(va_list ap);
char	*hexa_solver(va_list ap, char b);

t_list	*get_listed(const char *str, va_list ap);

#endif
