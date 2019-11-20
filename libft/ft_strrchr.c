/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:20:58 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/19 14:06:54 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int f;

	f = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			f = i;
		i++;
	}
	if (!c)
		return (&((char *)s)[i]);
	if (s[0] != c && f == 0)
		return (NULL);
	return (&((char *)s)[f]);
}
