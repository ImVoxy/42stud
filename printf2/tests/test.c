/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 10:17:52 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/16 15:11:48 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

int main(int ac, char **av)
{
	printf("%d\n", printf("||%.d||\n", 123456));
	printf("%d\n", printf("||%.i||\n", 123456));
//	printf("%d\n", ft_printf("|| test test %20s||\n", "bonjour"));
	return (0);
}
