/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 10:54:57 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/22 11:32:00 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

void main()
{
/*
	printf("*************************************************\n");
	printf("****************** TESTS %%c  ********************\n");
	printf("*************************************************\n\n\n");

	printf("%d\n", printf("+||%c||\n", NULL));
	printf("%d\n\n", ft_printf("-||%c||\n", NULL));
	printf("%d\n", printf("+||%045c||\n", NULL));
	printf("%d\n\n", ft_printf("-||%045c||\n", NULL));
	printf("%d\n", printf("+||%-10.4c||\n", NULL));
	printf("%d\n\n", ft_printf("-||%-10.4c||\n", NULL));
	printf("%d\n", printf("+||%.c||\n", NULL));
	printf("%d\n\n", ft_printf("-||%.c||\n", NULL));
	printf("%d\n", printf("+||%*.4c||\n", -4, NULL));
	printf("%d\n\n", ft_printf("-||%*.4c||\n", -4, NULL));
	printf("%d\n", printf("+||%.12c||\n", NULL));
	printf("%d\n\n", ft_printf("-||%.12c||\n", NULL));
	printf("%d\n", printf("+||%c||\n", 'y'));
	printf("%d\n\n", ft_printf("-||%c||\n", 'y'));
	printf("%d\n", printf("+||%045c||\n", 'y'));
	printf("%d\n\n", ft_printf("-||%045c||\n", 'y'));
	printf("%d\n", printf("+||%-10.4c||\n", 'y'));
	printf("%d\n\n", ft_printf("-||%-10.4c||\n", 'y'));
	printf("%d\n", printf("+||%.c||\n", 'y'));
	printf("%d\n\n", ft_printf("-||%.c||\n", 'y'));
	printf("%d\n", printf("+||%*.4c||\n", -4, 'y'));
	printf("%d\n\n", ft_printf("-||%*.4c||\n", -4, 'y'));
	printf("%d\n", printf("+||%.12c||\n", 'y'));
	printf("%d\n\n", ft_printf("-||%.12c||\n", 'y'));

	printf("\n*************************************************\n");
	printf("*************************************************\n\n");
*/
	printf("*************************************************\n");
	printf("******************* TESTS %%s  *******************\n");
	printf("*************************************************\n\n\n");

/*	printf("%d\n", printf("+||%s||\n", NULL));
	printf("%d\n\n", ft_printf("-||%s||\n", NULL));
*/	printf("%d\n", printf("+||%045s||\n", NULL));
	printf("%d\n\n", ft_printf("-||%045s||\n", NULL));
/*	printf("%d\n", printf("+||%-10.4s||\n", NULL));
	printf("%d\n\n", ft_printf("-||%-10.4s||\n", NULL));
	printf("%d\n", printf("+||%.s||\n", NULL));
	printf("%d\n\n", ft_printf("-||%.s||\n", NULL));
	printf("%d\n", printf("+||%*.4s||\n", -4, NULL));
	printf("%d\n\n", ft_printf("-||%*.4s||\n", -4, NULL));
	printf("%d\n", printf("+||%.12s||\n", NULL));
	printf("%d\n\n", ft_printf("-||%.12s||\n", NULL));
	printf("%d\n", printf("+||%s||\n", "Bonjour"));
	printf("%d\n\n", ft_printf("-||%s||\n", "Bonjour"));
	printf("%d\n", printf("+||%045s||\n", "Bonjour"));
	printf("%d\n\n", ft_printf("-||%045s||\n", "Bonjour"));
	printf("%d\n", printf("+||%-10.4s||\n", "Bonjour"));
	printf("%d\n\n", ft_printf("-||%-10.4s||\n", "Bonjour"));
	printf("%d\n", printf("+||%.s||\n", "Bonjour"));
	printf("%d\n\n", ft_printf("-||%.s||\n", "Bonjour"));
	printf("%d\n", printf("+||%*.4s||\n", -4, "Bonjour"));
	printf("%d\n\n", ft_printf("-||%*.4s||\n", -4, "Bonjour"));
	printf("%d\n", printf("+||%.12s||\n", "Bonjour"));
	printf("%d\n\n", ft_printf("-||%.12s||\n", "Bonjour"));
*/
	printf("\n*************************************************\n");
	printf("*************************************************\n\n");

}
