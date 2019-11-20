#include <stdio.h>
#include <stdlib.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len);

int main(int argc, char **argv)
{
	if (argc == 3)
		printf ("%s\n", ft_strnstr(argv[1], argv[2], 4));
	return (0);
}
