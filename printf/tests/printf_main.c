/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 15:15:17 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/07 13:42:38 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf_utils/ft_printf.h"

int main(int argc, char **argv)
{
	int i = 45;
	unsigned int j = 245;
	ft_printf(argv[1], argv[2], i, j);
	return (0);
}
