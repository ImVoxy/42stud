#include <string.h>
#include <stdio.h>

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);

int main(int argc, char **argv)
{
	char dst[10] = "b";

	printf("%s\n", dst);
//	printf("%lu  %s\n", strlcat(dst, argv[1], 5), dst);
	printf("%zu  %s\n", ft_strlcat(dst, argv[1], 5), dst);
	return 0;
}
