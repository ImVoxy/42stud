/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 12:07:44 by alpascal          #+#    #+#             */
/*   Updated: 2019/12/23 10:49:02 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		isnl(char *str, int test)
{
	int	i;

	i = 0;
	if (!str || ft_strlen(str) < 1)
		return (0);
	if (str[0] == '\n' && test == 2)
		return (1);
	if (str[1] == '\n' && test == 3)
		return (1);
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i] && test == 1)
		return (ft_strlen(str));
	str[i] == '\n' ? i : (i = 0);
	return (i);
}

char	*ft_substr_no_nl(char *str)
{
	char *test;

	if (str[0] == '\n')
	{
		if (isnl(test = ft_substr(str, 1, isnl(str, 3)), 2))
		{
			free(test);
			return (ft_substr(str, 1, isnl(str, 3) - 1));
		}
		free(test);
		return (ft_substr(str, 1, isnl(str, 3)));
	}
	return (ft_substr(str, 0, isnl(str, 1)));
}

int		get_next_line(int fd, char **line)
{
	static char	*str = NULL;
	char		buff[BUFFER_SIZE + 1];
	char		*tmp;
	int			ret;
	int			isok;

	isok = 0;
	ret = 1;
	while (!isnl(str, 2) && (ret > 0))
	{
		if (BUFFER_SIZE < 1 || fd < 0 || !line
		|| (ret = read(fd, buff, BUFFER_SIZE)) < 0)
			return (-1);
		buff[ret] = 0;
		tmp = str;
		str = ft_strjoin(tmp, buff);
		free(tmp);
	}
	((!isnl(str, 2) && (isnl(str, 1) <= 0)) || (ret <= 0)) ? isok : (isok = 1);
	*line = ft_substr_no_nl(str);
	tmp = str;
	str = (ft_substr(tmp, isnl(tmp, 1) + 1, ft_strlen(tmp)));
	free(tmp);
	(ret >= 0 || str[0]) || str[ft_strlen(str) - 1] ? (ret = isok) : ret;
	return (ret);
}
