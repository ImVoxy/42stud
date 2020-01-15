/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 11:14:04 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/15 09:32:40 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_reverse_tab(char *str, int test)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	result = ft_strdup(str);
	free(str);
	j = ft_strlen(str) - 1;
	if (test)
	{
		result[0] = '0';
		result[1] = 'x';
		i = 2;
	}
	while (j >= 0)
	{
		result[i] = str[j];
		i++;
		j--;
	}
//	free(str);
	return (result);
}

char	*ft_itoa_base(unsigned long nbr, char *base, int test, int len)
{
	char	*result;
	int		i;
	int		base_len;

	if (!(result = ft_calloc(sizeof(char), len + 1)))
		return (NULL);
	i = 0;
	base_len = ft_strlen(base);
	while (nbr / base_len)
	{
		result[i] = base[nbr % base_len];
		i++;
		nbr /= base_len;
	}
	result[i] = base[nbr % base_len];
	return (ft_reverse_tab(result, test));
}
