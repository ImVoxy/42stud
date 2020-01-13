
#include "ft_printf.h"

char	*ft_strdupl(const char *s1, int len)
{
	int		i;
	char	*cpy;

	i = 0;
	if (!(cpy = (char *)ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	while (i <= len)
	{
		cpy[i] = ' ';
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

int		get_len(char *str, char c, int *mem)
{
	int len;
	int nb;

	len = 0;
	nb = 0;
	while (*str && *str != c && nb <= 1)
	{
		if (*str >= '1' && *str <= '9')
		{
			len += ft_atoi(str);
			while (*str >= '0' && *str <= '9')
				str++;
			str--;
			nb++;
		}
		else if (*str == '*')
		{
			len += mem[nb];
			nb++;
		}
		str++;
	}
	return (len);
}
