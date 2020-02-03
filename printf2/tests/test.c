/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 10:17:52 by alpascal          #+#    #+#             */
/*   Updated: 2020/02/03 13:07:18 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

int main(int ac, char **av)
{
	char *c = "test";
//	printf("%d\n", printf("szRLTyh%9s%%%x%04.*X%%\n", "wh7FLrVg 7mZLy2 0rMGR43Jnpn69u9hRGvBlq", -2147483647, 0, 1311641604));
//	printf("%d\n", ft_printf("szRLTyh%9s%%%x%04.*X%%\n", "wh7FLrVg 7mZLy2 0rMGR43Jnpn69u9hRGvBlq", -2147483647, 0, 1311641604));
	printf("%d\n", printf("++%9s\n", "wh7FLrVg 7mZLy2 0rMGR43Jnpn69u9hRGvBlq"));
	printf("%d\n", ft_printf("--%9s\n", "wh7FLrVg 7mZLy2 0rMGR43Jnpn69u9hRGvBlq"));
	return (0);
}
