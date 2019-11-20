
#include "../libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char	**words;
	int		i;

	i = 0;
	if (!(words = ft_split(argv[1], argv[2][0])))
		return (0);
	while (words[i])
	{
		printf("%s\n", words[i]);
		i++;
	}
	return (0);
}
