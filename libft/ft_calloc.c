/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 10:04:50 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/20 12:21:36 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	i;
	void			*tab;

	i = 0;
	if (!(tab = malloc(size * count)))
		return (NULL);
	while (i < (count * size))
	{
		((char *)tab)[i] = 0;
		i++;
	}
	return (tab);
}
