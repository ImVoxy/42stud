/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 10:54:57 by alpascal          #+#    #+#             */
/*   Updated: 2020/02/03 12:38:15 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

int main()
{
	char *p;
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
	printf("%d\n", printf("+||%-10c||\n", NULL));
	printf("%d\n\n", ft_printf("-||%-10c||\n", NULL));
	printf("%d\n", printf("+||%.c||\n", 'y'));
	printf("%d\n\n", ft_printf("-||%.c||\n", 'y'));
	printf("%d\n", printf("+||%*.4c||\n", -4, 'y'));
	printf("%d\n\n", ft_printf("-||%*.4c||\n", -4, 'y'));
	printf("%d\n", printf("+||%.12c||\n", 'y'));
	printf("%d\n\n", ft_printf("-||%.12c||\n", 'y'));
	printf("%d\n", printf("+||%-3c||\n", ' '));
	printf("%d\n\n", ft_printf("-||%-3c||\n", ' '));
	printf("%d\n", printf("+||%-4.c||\n", NULL));
	printf("%d\n\n", ft_printf("-||%-4.c||\n", NULL));
	printf("%d\n", printf("+||%-3.c||\n", NULL));
	printf("%d\n\n", ft_printf("-||%-3.c||\n", NULL));
	printf("%d\n", printf("+||%-4.c||\n", NULL));
	printf("%d\n\n", ft_printf("-||%-4.c||\n", NULL));
	printf("%d\n", printf("+||%-4.c||\n", 123456));
	printf("%d\n\n", ft_printf("-||%-4.c||\n", 123456));
	printf("%d\n", printf("+||%-3c||\n", "ab"));
	printf("%d\n\n", ft_printf("-||%-3c||\n","ab"));

	printf("\n*************************************************\n");
	printf("*************************************************\n\n");


	printf("*************************************************\n");
	printf("****************** TESTS %%%%  ********************\n");

	printf("*************************************************\n\n\n");
	printf("%d\n", printf("+||%%||\n"));
	printf("%d\n\n", ft_printf("-||%%||\n"));
	printf("%d\n", printf("+||%045%||\n"));
	printf("%d\n\n", ft_printf("-||%045%||\n"));
	printf("%d\n", printf("+||%-10.4%||\n"));
	printf("%d\n\n", ft_printf("-||%-10.4%||\n"));
	printf("%d\n", printf("+||%.%||\n"));
	printf("%d\n\n", ft_printf("-||%.%||\n"));
	printf("%d\n", printf("+||%*.4%||\n", -4));
	printf("%d\n\n", ft_printf("-||%*.4%||\n", -4));
	printf("%d\n", printf("+||%.12%||\n"));
	printf("%d\n\n", ft_printf("-||%.12%||\n"));
	printf("%d\n", printf("+||%%||\n"));
	printf("%d\n\n", ft_printf("-||%%||\n"));
	printf("%d\n", printf("+||%045%||\n"));
	printf("%d\n\n", ft_printf("-||%045%||\n"));
	printf("%d\n", printf("+||%-10.4%||\n"));
	printf("%d\n\n", ft_printf("-||%-10.4%||\n"));
	printf("%d\n", printf("+||%-10%||\n"));
	printf("%d\n\n", ft_printf("-||%-10%||\n"));
	printf("%d\n", printf("+||%.%||\n"));
	printf("%d\n\n", ft_printf("-||%.%||\n"));
	printf("%d\n", printf("+||%*.4%||\n", -4));
	printf("%d\n\n", ft_printf("-||%*.4%||\n", -4));
	printf("%d\n", printf("+||%.12%||\n"));
	printf("%d\n\n", ft_printf("-||%.12%||\n"));
	printf("%d\n", printf("+||%-3%||\n"));
	printf("%d\n\n", ft_printf("-||%-3%||\n"));
	printf("%d\n", printf("+||%-4.%||\n"));
	printf("%d\n\n", ft_printf("-||%-4.%||\n"));
	printf("%d\n", printf("+||%-3.%||\n"));
	printf("%d\n\n", ft_printf("-||%-3%||\n"));
	printf("%d\n", printf("+||%-3%||\n"));
	printf("%d\n\n", ft_printf("-||%-3.%||\n"));
	printf("%d\n", printf("+||%-3.%||\n"));
	printf("%d\n\n", ft_printf("-||%-3%||\n"));
	printf("%d\n", printf("+||%-3%||\n"));
	printf("%d\n\n", ft_printf("-||%-3.%||\n"));

	printf("\n*************************************************\n");
	printf("*************************************************\n\n");

	printf("*************************************************\n");
	printf("******************* TESTS %%s  *******************\n");
	printf("*************************************************\n\n\n");

	printf("%d\n", printf("+||%s||\n", NULL));
	printf("%d\n\n", ft_printf("-||%s||\n", NULL));
	printf("%d\n", printf("+||%045s||\n", NULL));
	printf("%d\n\n", ft_printf("-||%045s||\n", NULL));
	printf("%d\n", printf("+||%-10.4s||\n", NULL));
	printf("%d\n\n", ft_printf("-||%-10.4s||\n", NULL));
	printf("%d\n", printf("+||%.s||\n", NULL));
	printf("%d\n\n", ft_printf("-||%.s||\n", NULL));
	printf("%d\n", printf("+||%*.4s||\n", -4, NULL));
	printf("%d\n\n", ft_printf("-||%*.4s||\n", -4, NULL));
	printf("%d\n", printf("+||%.12s||\n", NULL));
	printf("%d\n\n", ft_printf("-||%.12s||\n", NULL));
	printf("%d\n", printf("+||%-5.3s||\n", NULL));
	printf("%d\n\n", ft_printf("-||%-5.3s||\n", NULL));
	printf("%d\n", printf("+||%.s||\n", NULL));
	printf("%d\n\n", ft_printf("-||%.s||\n", NULL));
	printf("%d\n", printf("+||%-16.15s||\n", NULL));
	printf("%d\n\n", ft_printf("-||%-16.15s||\n", NULL));
	printf("%d\n", printf("+||%.*s|<--\n", -4, "Bonjour"));
	printf("%d\n\n", ft_printf("-||%.*s|<--\n", -4, "Bonjour"));
	printf("%d\n", printf("+||%-10.4s||\n", "Bonjour"));
	printf("%d\n\n", ft_printf("-||%-10.4s||\n", "Bonjour"));
	printf("%d\n", printf("+||%.s||\n", "Bonjour"));
	printf("%d\n\n", ft_printf("-||%.s||\n", "Bonjour"));
	printf("%d\n", printf("+||%*.4s||\n", -4, "Bonjour"));
	printf("%d\n\n", ft_printf("-||%*.4s||\n", -4, "Bonjour"));
	printf("%d\n", printf("+||%.12s||\n", "Bonjour"));
	printf("%d\n\n", ft_printf("-||%.12s||\n", "Bonjour"));
	printf("%d\n", printf("+||%-3.16s||\n", "Bonjour"));
	printf("%d\n\n", ft_printf("-||%-3.16s||\n", "Bonjour"));
	printf("%d\n", printf("+||%*.*s||\n", 10, 10, "Bonjour"));
	printf("%d\n\n", ft_printf("-||%*.*s||\n", 10, 10, "Bonjour"));
	printf("%d\n", printf("+||%-1.15s||\n", "Bonjour"));
	printf("%d\n\n", ft_printf("-||%-1.15s||\n", "Bonjour"));
	printf("%d\n", printf("+||%-16s||\n", "Bonjour"));
	printf("%d\n\n", ft_printf("-||%-16s||\n", "Bonjour"));

	printf("\n*************************************************\n");
	printf("*************************************************\n\n");

	printf("*************************************************\n");
	printf("******************* TESTS %%d  *******************\n");
	printf("*************************************************\n\n\n");

	printf("%d\n", printf("+||%d|<--\n", 123456));
	printf("%d\n\n", ft_printf("-||%d|<--\n", 123456));
	printf("%d\n", printf("+||%.*d|<--\n", -4, 123456));
	printf("%d\n\n", ft_printf("-||%.*d|<--\n", -4, 123456));
	printf("%d\n", printf("+||%012.*d|<--\n", 4, 123456));
	printf("%d\n\n", ft_printf("-||%012.*d|<--\n", 4, 123456));
	printf("%d\n", printf("+||%012.*d|<--\n", -4, 123456));
	printf("%d\n\n", ft_printf("-||%012.*d|<--\n", -4, 123456));
	printf("%d\n", printf("+||%-42.*d|<--\n", -4, 123456));
	printf("%d\n\n", ft_printf("-||%-42.*d|<--\n", -4, 123456));
	printf("%d\n", printf("+||%5d|<--\n", 123456));
	printf("%d\n\n", ft_printf("-||%5d|<--\n", 123456));
	printf("%d\n", printf("+||%-5d|<--\n", 123456));
	printf("%d\n\n", ft_printf("-||%-5d|<--\n", 123456));
	printf("%d\n", printf("+||%*.*d|<--\n", -12, -4, 123456));
	printf("%d\n\n", ft_printf("-||%*.*d|<--\n", -12, -4, 123456));
	printf("%d\n", printf("+||%*.*d|<--\n", 0, -4, 123456));
	printf("%d\n\n", ft_printf("-||%*.*d|<--\n", 0, -4, 123456));
	printf("%d\n", printf("+||%*.*d|<--\n", 4, 0, 123456));
	printf("%d\n\n", ft_printf("-||%*.*d|<--\n", 4, 0, 123456));
	printf("%d\n", printf("+||%015.*d|<--\n", 8, 123456));
	printf("%d\n\n", ft_printf("-||%015.*d|<--\n", 8, 123456));
	printf("%d\n", printf("+||%d|<--\n", -123456));
	printf("%d\n\n", ft_printf("-||%d|<--\n", -123456));
	printf("%d\n", printf("+||%.*d|<--\n", -4, -123456));
	printf("%d\n\n", ft_printf("-||%.*d|<--\n", -4, -123456));
	printf("%d\n", printf("+||%012.*d|<--\n", -4, -123456));
	printf("%d\n\n", ft_printf("-||%012.*d|<--\n", -4, -123456));
	printf("%d\n", printf("+||%-42.*d|<--\n", -4, -123456));
	printf("%d\n\n", ft_printf("-||%-42.*d|<--\n", -4, -123456));
	printf("%d\n", printf("+||%5d|<--\n", -123456));
	printf("%d\n\n", ft_printf("-||%5d|<--\n", -123456));
	printf("%d\n", printf("+||%-5d|<--\n", -123456));
	printf("%d\n\n", ft_printf("-||%-5d|<--\n", -123456));
	printf("%d\n", printf("+||%*.*d|<--\n", -12, -4, -123456));
	printf("%d\n\n", ft_printf("-||%*.*d|<--\n", -12, -4, -123456));
	printf("%d\n", printf("+||%*.*d|<--\n", 0, -4, -123456));
	printf("%d\n\n", ft_printf("-||%*.*d|<--\n", 0, -4, -123456));
	printf("%d\n", printf("+||%*.*d|<--\n", 4, 0, -123456));
	printf("%d\n\n", ft_printf("-||%*.*d|<--\n", 4, 0, -123456));
	printf("%d\n", printf("+||%015.*d|<--\n", 8, -123456));
	printf("%d\n\n", ft_printf("-||%015.*d|<--\n", 8, -123456));
	printf("%d\n", printf("+-->|%-4.*d|<--\n", 4, -123));
	printf("%d\n\n", ft_printf("--->|%-4.*d|<--\n", 4, -123));
	printf("%d\n", printf("+-->|%-4.0d|<--\n", 0));
	printf("%d\n\n", ft_printf("--->|%-4.0d|<--\n", 0));
	printf("%d\n", printf("+-->|%-2d|<--\n", 12345));
	printf("%d\n\n", ft_printf("--->|%-2d|<--\n", 12345));
	printf("%d\n", printf("+-->|%-*d|<--\n", 0, 0));
	printf("%d\n\n", ft_printf("--->|%-*d|<--\n", 0, 0));
	printf("%d\n", printf("+-->|%-4.d|<--\n", -5));
	printf("%d\n\n", ft_printf("--->|%-4.d|<--\n", -5));

	printf("\n*************************************************\n");
	printf("*************************************************\n\n");*/


/*	printf("*************************************************\n");
	printf("******************* TESTS %%i  *******************\n");
	printf("*************************************************\n\n\n");

	printf("%d\n", printf("+||%i|<--\n", 123456));
	printf("%d\n\n", ft_printf("-||%i|<--\n", 123456));
	printf("%d\n", printf("+||%.*i|<--\n", -4, 123456));
	printf("%d\n\n", ft_printf("-||%.*i|<--\n", -4, 123456));
	printf("%d\n", printf("+||%012.*i|<--\n", 4, 123456));
	printf("%d\n\n", ft_printf("-||%012.*i|<--\n", 4, 123456));
	printf("%d\n", printf("+||%012.*i|<--\n", -4, 123456));
	printf("%d\n\n", ft_printf("-||%012.*i|<--\n", -4, 123456));
	printf("%d\n", printf("+||%-42.*i|<--\n", -4, 123456));
	printf("%d\n\n", ft_printf("-||%-42.*i|<--\n", -4, 123456));
	printf("%d\n", printf("+||%5i|<--\n", 123456));
	printf("%d\n\n", ft_printf("-||%5i|<--\n", 123456));
	printf("%d\n", printf("+||%-5i|<--\n", 123456));
	printf("%d\n\n", ft_printf("-||%-5i|<--\n", 123456));
	printf("%d\n", printf("+||%*.*i|<--\n", -12, -4, 123456));
	printf("%d\n\n", ft_printf("-||%*.*i|<--\n", -12, -4, 123456));
	printf("%d\n", printf("+||%*.*i|<--\n", 0, -4, 123456));
	printf("%d\n\n", ft_printf("-||%*.*i|<--\n", 0, -4, 123456));
	printf("%d\n", printf("+||%*.*i|<--\n", 4, 0, 123456));
	printf("%d\n\n", ft_printf("-||%*.*i|<--\n", 4, 0, 123456));
	printf("%d\n", printf("+||%015.*i|<--\n", 8, 123456));
	printf("%d\n\n", ft_printf("-||%015.*i|<--\n", 8, 123456));
	printf("%d\n", printf("+||%i|<--\n", -123456));
	printf("%d\n\n", ft_printf("-||%i|<--\n", -123456));
	printf("%d\n", printf("+||%.*i|<--\n", -4, -123456));
	printf("%d\n\n", ft_printf("-||%.*i|<--\n", -4, -123456));
	printf("%d\n", printf("+||%012.*i|<--\n", -4, -123456));
	printf("%d\n\n", ft_printf("-||%012.*i|<--\n", -4, -123456));
	printf("%d\n", printf("+||%-42.*i|<--\n", -4, -123456));
	printf("%d\n\n", ft_printf("-||%-42.*i|<--\n", -4, -123456));
	printf("%d\n", printf("+||%5i|<--\n", -123456));
	printf("%d\n\n", ft_printf("-||%5i|<--\n", -123456));
	printf("%d\n", printf("+||%-5i|<--\n", -123456));
	printf("%d\n\n", ft_printf("-||%-5i|<--\n", -123456));
	printf("%d\n", printf("+||%*.*i|<--\n", -12, -4, -123456));
	printf("%d\n\n", ft_printf("-||%*.*i|<--\n", -12, -4, -123456));
	printf("%d\n", printf("+||%*.*i|<--\n", 0, -4, -123456));
	printf("%d\n\n", ft_printf("-||%*.*i|<--\n", 0, -4, -123456));
	printf("%d\n", printf("+||%*.*i|<--\n", 4, 0, -123456));
	printf("%d\n\n", ft_printf("-||%*.*i|<--\n", 4, 0, -123456));
	printf("%d\n", printf("+||%015.*i|<--\n", 8, -123456));
	printf("%d\n\n", ft_printf("-||%015.*i|<--\n", 8, -123456));
	printf("%d\n", printf("+-->|%-4.*i|<--\n", 4, -123));
	printf("%d\n\n", ft_printf("--->|%-4.*i|<--\n", 4, -123));
	printf("%d\n", printf("+-->|%-4.0i|<--\n", 0));
	printf("%d\n\n", ft_printf("--->|%-4.0i|<--\n", 0));
	printf("%d\n", printf("+-->|%-2i|<--\n", 12345));
	printf("%d\n\n", ft_printf("--->|%-2i|<--\n", 12345));
	printf("%d\n", printf("+-->|%-*i|<--\n", 0, 0));
	printf("%d\n\n", ft_printf("--->|%-*i|<--\n", 0, 0));
	printf("%d\n", printf("+-->|%-4.i|<--\n", -5));
	printf("%d\n\n", ft_printf("--->|%-4.i|<--\n", -5));

	printf("\n*************************************************\n");
	printf("*************************************************\n\n");

	printf("*************************************************\n");
	printf("******************* TESTS %%u  *******************\n");
	printf("*************************************************\n\n\n");

	printf("%d\n", printf("+||%d|<--\n", 123456));
	printf("%d\n\n", ft_printf("-||%d|<--\n", 123456));
	printf("%d\n", printf("+||%.*d|<--\n", -4, 123456));
	printf("%d\n\n", ft_printf("-||%.*d|<--\n", -4, 123456));
	printf("%d\n", printf("+||%012.*d|<--\n", 4, 123456));
	printf("%d\n\n", ft_printf("-||%012.*d|<--\n", 4, 123456));
	printf("%d\n", printf("+||%012.*d|<--\n", -4, 123456));
	printf("%d\n\n", ft_printf("-||%012.*d|<--\n", -4, 123456));
	printf("%d\n", printf("+||%-42.*d|<--\n", -4, 123456));
	printf("%d\n\n", ft_printf("-||%-42.*d|<--\n", -4, 123456));
	printf("%d\n", printf("+||%5d|<--\n", 123456));
	printf("%d\n\n", ft_printf("-||%5d|<--\n", 123456));
	printf("%d\n", printf("+||%-5d|<--\n", 123456));
	printf("%d\n\n", ft_printf("-||%-5d|<--\n", 123456));
	printf("%d\n", printf("+||%*.*d|<--\n", -12, -4, 123456));
	printf("%d\n\n", ft_printf("-||%*.*d|<--\n", -12, -4, 123456));
	printf("%d\n", printf("+||%*.*d|<--\n", 0, -4, 123456));
	printf("%d\n\n", ft_printf("-||%*.*d|<--\n", 0, -4, 123456));
	printf("%d\n", printf("+||%*.*d|<--\n", 4, 0, 123456));
	printf("%d\n\n", ft_printf("-||%*.*d|<--\n", 4, 0, 123456));
	printf("%d\n", printf("+||%015.*d|<--\n", 8, 123456));
	printf("%d\n\n", ft_printf("-||%015.*d|<--\n", 8, 123456));
	printf("%d\n", printf("+||%d|<--\n", -123456));
	printf("%d\n\n", ft_printf("-||%d|<--\n", -123456));
	printf("%d\n", printf("+||%.*d|<--\n", -4, -123456));
	printf("%d\n\n", ft_printf("-||%.*d|<--\n", -4, -123456));
	printf("%d\n", printf("+||%012.*d|<--\n", -4, -123456));
	printf("%d\n\n", ft_printf("-||%012.*d|<--\n", -4, -123456));
	printf("%d\n", printf("+||%-42.*d|<--\n", -4, -123456));
	printf("%d\n\n", ft_printf("-||%-42.*d|<--\n", -4, -123456));
	printf("%d\n", printf("+||%5d|<--\n", -123456));
	printf("%d\n\n", ft_printf("-||%5d|<--\n", -123456));
	printf("%d\n", printf("+||%-5d|<--\n", -123456));
	printf("%d\n\n", ft_printf("-||%-5d|<--\n", -123456));
	printf("%d\n", printf("+||%*.*d|<--\n", -12, -4, -123456));
	printf("%d\n\n", ft_printf("-||%*.*d|<--\n", -12, -4, -123456));
	printf("%d\n", printf("+||%*.*d|<--\n", 0, -4, -123456));
	printf("%d\n\n", ft_printf("-||%*.*d|<--\n", 0, -4, -123456));
	printf("%d\n", printf("+||%*.*d|<--\n", 4, 0, -123456));
	printf("%d\n\n", ft_printf("-||%*.*d|<--\n", 4, 0, -123456));
	printf("%d\n", printf("+||%015.*d|<--\n", 8, -123456));
	printf("%d\n\n", ft_printf("-||%015.*d|<--\n", 8, -123456));
	printf("%d\n", printf("+-->|%-4.*d|<--\n", 4, -123));
	printf("%d\n\n", ft_printf("--->|%-4.*d|<--\n", 4, -123));
	printf("%d\n", printf("+-->|%-4.0d|<--\n", 0));
	printf("%d\n\n", ft_printf("--->|%-4.0d|<--\n", 0));
	printf("%d\n", printf("+-->|%-2d|<--\n", 12345));
	printf("%d\n\n", ft_printf("--->|%-2d|<--\n", 12345));
	printf("%d\n", printf("+-->|%-*d|<--\n", 0, 0));
	printf("%d\n\n", ft_printf("--->|%-*d|<--\n", 0, 0));
	printf("%d\n", printf("+-->|%-4.d|<--\n", -5));
	printf("%d\n\n", ft_printf("--->|%-4.d|<--\n", -5));

	printf("\n*************************************************\n");
	printf("*************************************************\n\n");


	printf("*************************************************\n");
	printf("******************* TESTS %%x  *******************\n");
	printf("*************************************************\n\n\n");

	printf("%d\n", printf("+||%x|<--\n", 123456));
	printf("%d\n\n", ft_printf("-||%x|<--\n", 123456));
	printf("%d\n", printf("+||%.*x|<--\n", -4, 123456));
	printf("%d\n\n", ft_printf("-||%.*x|<--\n", -4, 123456));
	printf("%d\n", printf("+||%012.*x|<--\n", 4, 123456));
	printf("%d\n\n", ft_printf("-||%012.*x|<--\n", 4, 123456));
	printf("%d\n", printf("+||%012.*x|<--\n", -4, 123456));
	printf("%d\n\n", ft_printf("-||%012.*x|<--\n", -4, 123456));
	printf("%d\n", printf("+||%-42.*x|<--\n", -4, 123456));
	printf("%d\n\n", ft_printf("-||%-42.*x|<--\n", -4, 123456));
	printf("%d\n", printf("+||%5x|<--\n", 123456));
	printf("%d\n\n", ft_printf("-||%5x|<--\n", 123456));
	printf("%d\n", printf("+||%-5x|<--\n", 123456));
	printf("%d\n\n", ft_printf("-||%-5x|<--\n", 123456));
	printf("%d\n", printf("+||%*.*x|<--\n", -12, -4, 123456));
	printf("%d\n\n", ft_printf("-||%*.*x|<--\n", -12, -4, 123456));
	printf("%d\n", printf("+||%*.*x|<--\n", 0, -4, 123456));
	printf("%d\n\n", ft_printf("-||%*.*x|<--\n", 0, -4, 123456));
	printf("%d\n", printf("+||%*.*x|<--\n", 4, 0, 123456));
	printf("%d\n\n", ft_printf("-||%*.*x|<--\n", 4, 0, 123456));
	printf("%d\n", printf("+||%015.*x|<--\n", 8, 123456));
	printf("%d\n\n", ft_printf("-||%015.*x|<--\n", 8, 123456));
	printf("%d\n", printf("+||%x|<--\n", -123456));
	printf("%d\n\n", ft_printf("-||%x|<--\n", -123456));
	printf("%d\n", printf("+||%.*x|<--\n", -4, -123456));
	printf("%d\n\n", ft_printf("-||%.*x|<--\n", -4, -123456));
	printf("%d\n", printf("+||%012.*x|<--\n", -4, -123456));
	printf("%d\n\n", ft_printf("-||%012.*x|<--\n", -4, -123456));
	printf("%d\n", printf("+||%-42.*x|<--\n", -4, -123456));
	printf("%d\n\n", ft_printf("-||%-42.*x|<--\n", -4, -123456));
	printf("%d\n", printf("+||%5x|<--\n", -123456));
	printf("%d\n\n", ft_printf("-||%5x|<--\n", -123456));
	printf("%d\n", printf("+||%-5x|<--\n", -123456));
	printf("%d\n\n", ft_printf("-||%-5x|<--\n", -123456));
	printf("%d\n", printf("+||%*.*x|<--\n", -12, -4, -123456));
	printf("%d\n\n", ft_printf("-||%*.*x|<--\n", -12, -4, -123456));
	printf("%d\n", printf("+||%*.*x|<--\n", 0, -4, -123456));
	printf("%d\n\n", ft_printf("-||%*.*x|<--\n", 0, -4, -123456));
	printf("%d\n", printf("+||%*.*x|<--\n", 4, 0, -123456));
	printf("%d\n\n", ft_printf("-||%*.*x|<--\n", 4, 0, -123456));
	printf("%d\n", printf("+||%015.*x|<--\n", 8, -123456));
	printf("%d\n\n", ft_printf("-||%015.*x|<--\n", 8, -123456));
	printf("%d\n", printf("+-->|%-4.*x|<--\n", 4, -123));
	printf("%d\n\n", ft_printf("--->|%-4.*x|<--\n", 4, -123));
	printf("%d\n", printf("+-->|%-4.0x|<--\n", 0));
	printf("%d\n\n", ft_printf("--->|%-4.0x|<--\n", 0));
	printf("%d\n", printf("+-->|%-2x|<--\n", 12345));
	printf("%d\n\n", ft_printf("--->|%-2x|<--\n", 12345));
	printf("%d\n", printf("+-->|%-*x|<--\n", 0, 0));
	printf("%d\n\n", ft_printf("--->|%-*x|<--\n", 0, 0));
	printf("%d\n", printf("+-->|%-4.x|<--\n", -5));
	printf("%d\n\n", ft_printf("--->|%-4.x|<--\n", -5));
	printf("%d\n", printf("+||%012.*x|<--\n", 4, 123456));
	printf("%d\n\n", ft_printf("-||%012.*x|<--\n", 4, 123456));
	printf("%d\n", printf("+||%012.*x|<--\n", 5, 123456));
	printf("%d\n\n", ft_printf("-||%012.*x|<--\n", 3, 123456));
	printf("%d\n", printf("+||%0.*x|<--\n", -4, 123456));
	printf("%d\n\n", ft_printf("-||%0.*x|<--\n", -4, 123456));
	printf("%d\n", printf("+-->|%-4.1x|<--\n", 0));
	printf("%d\n\n", ft_printf("--->|%-4.1x|<--\n", 0));
	printf("%d\n", printf("+-->|%4x|<--\n", 0));
	printf("%d\n\n", ft_printf("--->|%4x|<--\n", 0));

	printf("\n*************************************************\n");
	printf("*************************************************\n\n");
*/
	printf("*************************************************\n");
	printf("******************* TESTS %%p  *******************\n");
	printf("*************************************************\n\n\n");

	printf("%d\n", printf("+||%p|<--\n", &p));
	printf("%d\n\n", ft_printf("-||%p|<--\n", &p));
	printf("%d\n", printf("+||%.*p|<--\n", -4, &p));
	printf("%d\n\n", ft_printf("-||%.*p|<--\n", -4, &p));
	printf("%d\n", printf("+||%012.*p|<--\n", 4, &p));
	printf("%d\n\n", ft_printf("-||%012.*p|<--\n", 4, &p));
	printf("%d\n", printf("+||%012.*p|<--\n", -4, &p));
	printf("%d\n\n", ft_printf("-||%012.*p|<--\n", -4, &p));
	printf("%d\n", printf("+||%-42.*p|<--\n", -4, &p));
	printf("%d\n\n", ft_printf("-||%-42.*p|<--\n", -4, &p));
	printf("%d\n", printf("+||%5p|<--\n", &p));
	printf("%d\n\n", ft_printf("-||%5p|<--\n", &p));
	printf("%d\n", printf("+||%-5p|<--\n", &p));
	printf("%d\n\n", ft_printf("-||%-5p|<--\n", &p));
	printf("%d\n", printf("+||%*.*p|<--\n", -12, -4, &p));
	printf("%d\n\n", ft_printf("-||%*.*p|<--\n", -12, -4, &p));
	printf("%d\n", printf("+||%*.*p|<--\n", 0, -4, &p));
	printf("%d\n\n", ft_printf("-||%*.*p|<--\n", 0, -4, &p));
	printf("%d\n", printf("+||%*.*p|<--\n", 4, 0, &p));
	printf("%d\n\n", ft_printf("-||%*.*p|<--\n", 4, 0, &p));
	printf("%d\n", printf("+||%015.*p|<--\n", 8, &p));
	printf("%d\n\n", ft_printf("-||%015.*p|<--\n", 8, &p));
	printf("%d\n", printf("+||%p|<--\n", NULL));
	printf("%d\n\n", ft_printf("-||%p|<--\n", NULL));
	printf("%d\n", printf("+||%.*p|<--\n", -4, NULL));
	printf("%d\n\n", ft_printf("-||%.*p|<--\n", -4, NULL));
	printf("%d\n", printf("+||%012.*p|<--\n", -4, NULL));
	printf("%d\n\n", ft_printf("-||%012.*p|<--\n", -4, NULL));
	printf("%d\n", printf("+||%-42.*p|<--\n", -4, NULL));
	printf("%d\n\n", ft_printf("-||%-42.*p|<--\n", -4, NULL));
	printf("%d\n", printf("+||%5p|<--\n", NULL));
	printf("%d\n\n", ft_printf("-||%5p|<--\n", NULL));
	printf("%d\n", printf("+||%-5p|<--\n", NULL));
	printf("%d\n\n", ft_printf("-||%-5p|<--\n", NULL));
	printf("%d\n", printf("+||%*.*p|<--\n", -12, -4, NULL));
	printf("%d\n\n", ft_printf("-||%*.*p|<--\n", -12, -4, NULL));
	printf("%d\n", printf("+||%*.*p|<--\n", 0, -4, NULL));
	printf("%d\n\n", ft_printf("-||%*.*p|<--\n", 0, -4, NULL));
	printf("%d\n", printf("+||%*.*p|<--\n", 4, 0, NULL));
	printf("%d\n\n", ft_printf("-||%*.*p|<--\n", 4, 0, NULL));
	printf("%d\n", printf("+||%015.*p|<--\n", 8, NULL));
	printf("%d\n\n", ft_printf("-||%015.*p|<--\n", 8, NULL));
	printf("%d\n", printf("+-->|%-4.*p|<--\n", 4, NULL));
	printf("%d\n\n", ft_printf("--->|%-4.*p|<--\n", 4, NULL));
	printf("%d\n", printf("+-->|%-4.0p|<--\n", NULL));
	printf("%d\n\n", ft_printf("--->|%-4.0p|<--\n", NULL));
	printf("%d\n", printf("+-->|%-2p|<--\n", NULL));
	printf("%d\n\n", ft_printf("--->|%-2p|<--\n", NULL));
	printf("%d\n", printf("+-->|%-*p|<--\n", 0, NULL));
	printf("%d\n\n", ft_printf("--->|%-*p|<--\n", 0, NULL));
	printf("%d\n", printf("+-->|%-4.p|<--\n", NULL));
	printf("%d\n\n", ft_printf("--->|%-4.p|<--\n", NULL));
	printf("%d\n", printf("+-->|%4.p|<--\n", NULL));
	printf("%d\n\n", ft_printf("--->|%4.p|<--\n", NULL));
	printf("%d\n", printf("+-->|%*p|<--\n", 0, NULL));
	printf("%d\n\n", ft_printf("--->|%*p|<--\n", 0, NULL));
	printf("%d\n", printf("+-->|%-16p|<--\n", &p));
	printf("%d\n\n", ft_printf("--->|%-16p|<--\n", &p));

	printf("\n*************************************************\n");
	printf("*************************************************\n\n");

return (0);
}
