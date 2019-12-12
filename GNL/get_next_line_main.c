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

#include "../../GNL/get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd;
	int ret = 1;
	char *str;
	fd = open("testn", O_RDONLY);
	while (ret > 0)
	{
		ret = get_next_line(fd, &str);
		printf("%d - %s", ret, str);
		free(str);
		str = NULL;
	}
//	if (str)
	free(str);
	//ret = get_next_line(fd, &str);
	return (0);
}
