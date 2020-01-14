/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 15:28:58 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/14 14:43:43 by alpascal         ###   ########.fr       */
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
	char			flag;
	int				len;
	struct s_list2	*next;
}				p_list;

int		ft_get_printed(p_list *list);
int		ft_flag_loop(p_list *list, char *str, char *c, va_list ap);
int		ft_get_next_flag(p_list *list, const char *str, int i, va_list ap);
int		ft_get_len(char *str, char c, int *mem);
int		*ft_flag_mem(char *str, va_list ap);

char	*ft_s_sol(va_list ap, char b, char *str, int *d);
char	*ft_p_sol(va_list ap, char *str, int *d);
char	*ft_i_sol(va_list ap, char *str, int *d);
char	*ft_u_sol(va_list ap, char *str, int *d);
char	*ft_h_sol(va_list ap, char b, char *str, int *d);
char	*ft_strdupl(const char *s1, int len);
char	*ft_itoa_base(unsigned long nbr, char *base, int test, int len);

void	ft_plstadd_back(p_list **alst, p_list *new);
void	ft_flag_reader(p_list *list, char *str, int *d);
void	ft_minus_str(char *str, char type, int len_str);

p_list	*get_listed(const char *str, va_list ap);
p_list	*ft_plstnew(void *content);

#endif
