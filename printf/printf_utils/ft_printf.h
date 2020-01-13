/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 15:28:58 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/13 15:36:56 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft.h"
# include <stdarg.h>

typedef struct	s_list2
{
	char			*content;
	char			type;
	int				size;
	int				len;
	struct s_list2	*next;
}				p_list;

int		get_printed(p_list *list);
int		flag_loop(p_list *list, char *str, char *c, va_list ap);
int		get_next_flag(p_list *list, const char *str, int i, va_list ap);
int		get_len(char *str, char c, int *mem);
char	*ft_itoa_base(unsigned long nbr, char *base, int test, int len);
int		*flag_mem(char *str, va_list ap);

char	*s_solver(va_list ap, char b, char *str, int *d);
char	*p_solver(va_list ap, char *str, int *d);
char	*i_solver(va_list ap, char *str, int *d);
char	*u_solver(va_list ap, char *str, int *d);
char	*h_solver(va_list ap, char b, char *str, int *d);
char	*ft_strdupl(const char *s1, int len);

void	ft_plstadd_back(p_list **alst, p_list *new);

t_list	*get_listed(const char *str, va_list ap);

#endif
