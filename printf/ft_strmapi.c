/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:54:08 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/18 11:41:25 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	if (!s)
		return (str = ft_calloc(sizeof(*str), 1));
	j = ft_strlen(s);
	if (!(str = malloc(sizeof(*str) * (j + 1))))
		return (NULL);
	while (s[i])
	{
		if (f)
			str[i] = f(i, s[i]);
		else
			str[i] = ((char *)s)[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
