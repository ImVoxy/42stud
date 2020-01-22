/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_callocs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:31:57 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/22 11:54:34 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_callocs(size_t count, size_t size)
{
	char	*tab;
	size_t	i;

	i = 0;
	if (!(tab = malloc(size * count)))
		return (NULL);
	while (i < count - 1)
		tab[i++] = ' ';
	tab[i] = 0;
	return (tab);
}
