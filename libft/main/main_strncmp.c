#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

int main (int argc, char **argv)
{
	printf ("%d\n", ft_strncmp(argv[1], argv[2], 5));
}
