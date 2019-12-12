/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 12:07:44 by alpascal          #+#    #+#             */
/*   Updated: 2019/12/12 16:48:52 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		isnl(char *str, int test)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i] && str[0] && test)
		return (ft_strlen(str));
	str[i] == '\n' ? i : (i = 0);
	return (i);
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
	if (BUFFER_SIZE < 1 || fd < 0 || !line)
		return (-1);
	while (!isnl(str, 0) && (ret > 0))
	{
		if ((ret = read(fd, buff, BUFFER_SIZE)) < 0)
			return (-1);
		buff[ret] = 0;
		tmp = str;
		str = ft_strjoin(str, buff);
		free(tmp);
	}
	((isnl(str, 1) > 0) || (str[0] == '\n')) ? (isok = 1) : isok;
	*line = ft_substr(str, 0, isnl(str, 1) + 1);
	tmp = str;
	str = (ft_substr(tmp, isnl(tmp, 1) + 1, ft_strlen(tmp)));
	free(tmp);
	ret < 0 && str[0] == 0 ? ret : (ret = isok);
	return (ret);
}
