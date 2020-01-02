/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 11:07:50 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/13 15:58:24 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isin(char const c, char const *set)
{
	unsigned int i;

	i = 0;
	if (!set || !c)
		return (0);
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int				min;
	int				max;
	unsigned int	i;
	char			*str;

	i = 0;
	min = 0;
	if (!s1 || !set)
		return (NULL);
	max = ft_strlen(s1) - 1;
	while (isin(s1[min], set) == 1 && s1[min])
		min++;
	while (isin(s1[max], set) == 1 && (max >= (min + 1)))
		max--;
	if (!(str = malloc(sizeof(*str) * (max - min + 2))))
		return (NULL);
	while (min <= max)
	{
		str[i] = s1[min];
		min++;
		i++;
	}
	str[i] = 0;
	return (str);
}
