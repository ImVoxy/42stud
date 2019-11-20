/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:56:48 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/20 14:30:50 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	if (!dst || !src)
		return (NULL);
	while (i < n && ((unsigned char *)src)[i] != (unsigned char)c)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	if (i != n)
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	if (((unsigned char *)src)[i] == (unsigned char)c)
		return (&(dst[i + 1]));
	return (NULL);
}
