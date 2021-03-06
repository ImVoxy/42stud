/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:44:26 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/16 12:26:05 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_strlen(const char *str)
{
	int size;

	if (!str)
		return (6);
	size = 0;
	while (str[size])
		size++;
	return (size);
}
