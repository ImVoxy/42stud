/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 12:08:28 by alpascal          #+#    #+#             */
/*   Updated: 2019/12/12 13:58:57 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "../libft.h"

int		get_next_line(int fd, char **line);
int		isnl(char *str, int test);

char	*ft_substr_no_nl(char *str);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8
# endif

#endif
