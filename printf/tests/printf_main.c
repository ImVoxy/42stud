/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 15:15:17 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/14 15:16:21 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf_utils/ft_printf.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 45;
	char c = 'n';
	int *p;
	unsigned int j = 245;
	printf("%p\n", &p);
	ft_printf("%p\n", &p);
//	printf(" --- %d ---\n", ft_printf("%p", i));
	return (0);
}
