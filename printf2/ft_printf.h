/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 10:05:43 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/21 11:43:57 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	char			type;
	char			flag;
	int				len;
	int				pre;

}				t_list;

int				ft_printf(const char *str, ...);
int				ft_print_it(va_list ap, const char **str);
int				ft_is_in(char c);
int				ft_isdigit(int c);
int				ft_atoi(const char **str);
int				ft_p_type(t_list list, unsigned long nb);
int				ft_u_type(t_list list, char *nb);
int				ft_x_type(t_list list, unsigned int nb);
int				ft_X_type(t_list list, unsigned int nb);
int				ft_c_type(t_list list, char c);
int				ft_s_type(t_list list, char *str);
int				ft_d_type(t_list list, char *nb);
int				ft_i_type(t_list list, char *nb);
int				ft_get_len_d(int n, t_list list, int base);
int				ft_get_len_h(unsigned int n, t_list list, int base);

char			*ft_callocs(size_t count, size_t size);
char			*ft_itoal(long int n, t_list list);
char			*ft_strdup(const char *s1);
char			*ft_itoa_base(long nbr, int test, int len, int j);

void			ft_init_list(t_list *list);
void			ft_putstr(char *s);

size_t			ft_strlen(const char *str);

t_list			ft_get_listed(va_list ap, const char **str);

#endif
