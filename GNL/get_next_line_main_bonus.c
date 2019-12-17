/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 11:15:38 by alpascal          #+#    #+#             */
/*   Updated: 2019/12/12 16:47:55 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

void	loop(int fd, int numtest)
{
	int ret = 1;
	char *str;


	printf("*************************************************\n");
	printf("******************** TEST %d *********************\n", numtest);
	printf("*************************************************\n\n\n");

	while (ret > 0)
	{
		ret = get_next_line(fd, &str);
		printf("%d - %s\n", ret, str);
		free(str);
		str = NULL;
	}

	printf("fin ici\n\n");
//	if (str)
	free(str);
	//ret = get_next_line(fd, &str);
}

int main()
{
	loop (open("tests/empty", O_RDONLY), 1);
	loop (open("tests/one_new_line", O_RDONLY), 2);
	loop (open("tests/five_new_lines", O_RDONLY), 3);
	loop (open("tests/short_test", O_RDONLY), 4);
	loop (open("tests/short_test_n", O_RDONLY), 5);
	loop (open("tests/long_test", O_RDONLY), 6);
	loop (open("tests/long_test_n", O_RDONLY), 7);
	loop (open("tests/2_long_tests", O_RDONLY), 8);
	loop (open("tests/homer", O_RDONLY), 9);
	loop (0, 10);

	printf("*************************************************\n");
	printf("*************************************************\n\n");

	return (0);
}
