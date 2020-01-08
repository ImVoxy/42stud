/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 15:15:17 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/08 15:11:38 by alpascal         ###   ########.fr       */
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
	ft_printf("%p", &p);
//	printf(" --- %d ---\n", ft_printf("%p", c, i, j));
	return (0);
}
