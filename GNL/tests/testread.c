/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testread.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 10:40:35 by alpascal          #+#    #+#             */
/*   Updated: 2019/12/12 10:40:17 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>

//#include "../../GNL/get_next_line.h"
#include "../../libft/libft.h"

int main()
{
	char *buff;
	char *ind;
	int fd;
	int i = 0;
//	size_t size = BUFFER_SIZE;

//	fd = open("test", O_RDONLY);
//	while (i < 50)
//	{
//		if (!(buff = ft_calloc(51, sizeof(*buff))))
//			return (0);
//	}
//	ind = buff;
//	while (i < size)
//	{
//	while (i < 5)
//	{
//		printf("%zd\n", read(fd, buff, BUFFER_SIZE));
//		printf("%s\n", buff);
//		i++;
//	}
//	if (*buff == '\n')
//		break;
//	buff++;
//	i++;
	//}
//	while (*ind)
//	{
//		write(1, ind, 1);
//		ind++;
//	}
//
	if (i != 0 && (i = 2) > 0)
			printf("wtf");
		printf("%d\n", i);
	return (0);
}
