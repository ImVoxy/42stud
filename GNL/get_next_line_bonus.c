#include "get_next_line.h"

int		isnl(char *str, int test)
{
	int	i;

	i = 0;
	if (!str)
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

char		*ft_substr_no_nl(char *str)
{
	char *test;

	if (str[0] == '\n')
	{
		if (isnl(test = ft_substr(str, 1, isnl(str, 3)), 2))
		{
			return (ft_substr(str, 1, isnl(str, 3) - 1));
			free(test);
		}
		return (ft_substr(str, 1, isnl(str, 3)));
		free(test);
	}
	return (ft_substr(str, 0, isnl(str, 1)));
}

int		get_next_line(int fd, char **line)
{
	static char	*str[4096];
	char		buff[BUFFER_SIZE + 1];
	char		*tmp;
	int			r;
	int			i;

	i = 0;
	r = 1;
	if (BUFFER_SIZE < 1 || fd < 0 || !line)
		return (-1);
	while (!isnl(str[fd], 2) && (r > 0))
	{
		r = read(fd, buff, BUFFER_SIZE);
		buff[r] = 0;
		tmp = str[fd];
		str[fd] = ft_strjoin(tmp, buff);
		free(tmp);
	}
	((!isnl(str[fd], 2) && isnl(str[fd], 1) <= 0) || (r <= 0)) ? r : (i = 1);
	*line = ft_substr_no_nl(str[fd]);
	tmp = str[fd];
	str[fd] = (ft_substr(tmp, isnl(tmp, 1) + 1, ft_strlen(tmp)));
	free(tmp);
	(r >= 0 || str[0]) || str[ft_strlen(str[fd]) - 1] ? (r = i) : r;
	return (r);
}
