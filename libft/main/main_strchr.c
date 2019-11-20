#include <stdio.h>
#include <stdlib.h>

char *ft_strrchr(const char *s, int c);

int main(int argc, char **argv)
{
	if (argc == 2)
		printf ("%s\n", ft_strrchr(argv[1], 'e'));
	return (0);
}
