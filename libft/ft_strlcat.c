/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 09:27:23 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/20 13:13:14 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	unsigned int lendst;
	unsigned int lensrc;
	unsigned int i;

	lendst = 0;
	lensrc = 0;
	i = 0;
	while (src[lensrc])
		lensrc++;
	while (dst[lendst] && lendst < dsize)
		lendst++;
	if (dsize <= lendst)
		return (lensrc + dsize);
	while (src[i] && dsize && (i + lendst) < (dsize - 1))
	{
		dst[i + lendst] = src[i];
		i++;
	}
	if (dst[i + lendst])
		dst[i + lendst] = '\0';
	return (lensrc + lendst);
}
