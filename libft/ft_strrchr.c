/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:20:58 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/21 13:54:56 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int f;

	f = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			f = i;
		i++;
	}
	if (c == '\0')
		return (&((char *)s)[i]);
	if (f < 0)
		return (NULL);
	return (&((char *)s)[f]);
}
