/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:40:46 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/19 16:03:42 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if (!haystack)
		return (NULL);
	if (!needle || needle[0] == 0)
		return ((char *)haystack);
	if (haystack)
		while (haystack[i] != '\0' && i < len)
		{
			if (haystack[i] == needle[0])
			{
				j = 0;
				while (haystack[i] == needle[j] && i < len)
				{
					if (needle[j + 1] == '\0')
						return (&(((char *)haystack)[i - j]));
					i++;
					j++;
				}
			}
			i++;
		}
	return (NULL);
}
