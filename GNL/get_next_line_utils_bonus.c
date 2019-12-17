#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	int size;

	if (!str)
		return (0);
	size = 0;
	while (str[size])
		size++;
	return (size);
}

char	*ft_strdup(char *s1)
{
	int		i;
	char	*cpy;

	i = 0;
	if (!(cpy = (char *)ft_calloc(ft_strlen(s1) + 1, sizeof(char))))
		return (NULL);
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char			*str;
	unsigned int	i;
	unsigned int	lens1;
	unsigned int	lens2;

	i = -1;
	if (!s2 && s1)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (!(str = malloc(sizeof(*str) * (lens1 + lens2 + 1))))
		return (NULL);
	while (++i < lens1)
		str[i] = s1[i];
	while (i < (lens1 + lens2))
	{
		str[i] = s2[i - lens1];
		i++;
	}
	str[i] = 0;
	return (str);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (ft_strdup(""));
	while (s[i])
		i++;
	if (start > i)
		return (ft_strdup(""));
	if (!(str = malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;
	size_t	i;

	i = 0;
	if (!(tab = malloc(size * count)))
		return (NULL);
	while (i < size)
	{
		((unsigned char *)tab)[i] = 0;
		i++;
	}
	return (tab);
}
