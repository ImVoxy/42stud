/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 15:15:17 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/15 09:46:55 by alpascal         ###   ########.fr       */
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
	printf("%3s\n", "bonjour");
	ft_printf("%3p\n", "bonjour");
//	printf(" --- %d ---\n", ft_printf("%p", i));
	return (0);
}
