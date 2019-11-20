/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:53:28 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/20 12:45:45 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	if (!n || !s)
		return (NULL);
	while (i < n && (char *)s)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
		i++;
	}
	return (NULL);
}
