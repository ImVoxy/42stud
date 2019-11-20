/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:04:42 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/19 16:55:32 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	if (!s2 && s1)
		return (((unsigned char*)s1)[0]);
	if (!s1 && s2)
		return ((((unsigned char*)s2)[0]) * -1);
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char*)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
