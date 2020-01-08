/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:39:22 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/08 12:22:56 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*reverse_tab(char *str)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	result = ft_strdup(str);
	j = ft_strlen(str) - 1;
	while (j >= 0)
	{
		result[i] = str[j];
		i++;
		j--;
	}
	free(str);
	return (result);
}

char	*ft_itoa_base(unsigned int nbr, char *base)
{
	char *result;
	int sign;
	int i;
	int base_len;

	if (!(result = ft_calloc(sizeof(char), 17)))
		return (NULL);
	i = 0;
	sign = 1;
	nbr < 0 ? sign = -1 : sign;
	base_len = ft_strlen(base);
	while (nbr / base_len)
	{
		result[i] = base[nbr % base_len];
		i++;
		nbr /= base_len;
	}
	result[i] = base[nbr % base_len];
	sign == -1 ? result[i + 1] = '-' : 0 ;
	return (reverse_tab(result));
}
