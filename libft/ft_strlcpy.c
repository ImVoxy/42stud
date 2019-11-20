/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 08:45:39 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/20 13:14:16 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	unsigned int i;
	unsigned int f;

	i = 0;
	if (!dst || !src)
		return (0);
	while (src[i] && i < (dsize - 1) && dsize != 0)
	{
		dst[i] = src[i];
		i++;
	}
	f = i;
	while (src[i])
		i++;
	if (dsize != 0 && dst[f])
		dst[f] = 0;
	return (i);
}
