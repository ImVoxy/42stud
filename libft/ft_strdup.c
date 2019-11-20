/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 09:33:54 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/20 12:55:20 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	i;
	char			*cpy;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i])
		i++;
	if (!(cpy = malloc(sizeof(*cpy) * (i + 1))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = 0;
	return ((char *)cpy);
}
