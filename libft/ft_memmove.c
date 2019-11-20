/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:10:30 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/20 14:58:20 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!(dst) || !(src))
		return (dst);
	if (dst < src)
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	else
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	return (dst);
}
