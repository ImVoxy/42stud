/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 10:17:19 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/15 09:44:16 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdupl(const char *s1, int len)
{
	int		i;
	char	*cpy;

	i = 0;
	if (!(cpy = (char *)ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	while (i <= len)
	{
		cpy[i] = ' ';
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
int		ft_get_len(char *str, char c, int *mem)
{
	int len[2];
	int nb;
	int i;

	len[0] = 0;
	len[1] = 0;
	i = 0;
	nb = 0;
	while (*str && *str != c && nb <= 1 && i <= 1)
	{
		if (*str >= '1' && *str <= '9')
		{
			len[i++] = ft_atoi(str);
			while (*str >= '0' && *str <= '9')
				str++;
		}
		else if (*str == '*')
		{
			len[i++] = mem[nb];
			nb++;
		}
		str++;
	}
	len[1] > len[0] ? len[0] = len[1] : 1;
	return (len[0]);
}
