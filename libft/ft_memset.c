/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:35:02 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/20 14:50:41 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = b;
	if (!b)
		return (NULL);
	while (i < len && ((unsigned char *)b)[i])
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
