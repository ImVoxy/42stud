/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 10:17:52 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/22 16:04:58 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

int main(int ac, char **av)
{
	char *c = "test";
	printf("%d\n", printf("-->|%-2.*s|<--\n", 1, c));
	printf("%d\n", ft_printf("-->|%-2.*s|<--\n", 1, c));
	return (0);
}
