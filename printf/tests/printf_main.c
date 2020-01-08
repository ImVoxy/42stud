/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 15:15:17 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/08 12:06:20 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf_utils/ft_printf.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 45;
	char c = 'n';
	unsigned int j = 245;
	printf(" --- %d ---\n", ft_printf(argv[1], c, i, j));
	return (0);
}
