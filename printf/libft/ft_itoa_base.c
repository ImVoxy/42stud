/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 11:14:04 by alpascal          #+#    #+#             */
/*   Updated: 2020/02/04 14:57:57 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_len_hex(char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != ' ')
		i++;
	return (i);
}

char	*ft_reverse_tab(char *str, int test)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	result = ft_strdup(str);
	j = ft_strlen(str);
	if (test)
	{
		result[0] = '0';
		result[1] = 'x';
		i = 2;
	}
	j = ft_len_hex(str) - 1;
	while (j >= 0)
	{
		result[i] = str[j];
		i++;
		j--;
	}
	free(str);
	return (result);
}

char	*ft_itoa_base(long nbr, int test, int len, int j)
{
	char	*result;
	int		i;
	int		base_len;
	char	*base;

	base = "0123456789abcdef";
	if (!(result = ft_callocs((len + 1), sizeof(char))))
		return (NULL);
	i = 0;
	base_len = ft_strlen(base);
	while ((nbr / base_len) && (i < j - 1))
	{
		result[i] = base[nbr % base_len];
		i++;
		nbr /= base_len;
	}
	if (nbr && (i < j - 1))
		result[i++] = base[nbr % base_len];
	while (i < j - 1)
		result[i++] = '0';
	return (ft_reverse_tab(result, test));
}
