/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 10:54:00 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/20 15:41:36 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	i;
	unsigned int	lens1;
	unsigned int	lens2;

	i = -1;
	if (!s2 && s1)
		return (ft_strdup(s1));
	if (s2 && !s1)
		return (ft_strdup(s2));
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (!(str = malloc(sizeof(*str) * (lens1 + lens2 + 1))))
		return (NULL);
	while (++i < lens1)
		str[i] = s1[i];
	while (i < (lens1 + lens2))
	{
		str[i] = s2[i - lens1];
		i++;
	}
	str[i] = 0;
	return (str);
}
