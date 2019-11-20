#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_atoi(char *str);

int main(int argc, char **argv)
{
	printf("M: %d\n", ft_atoi(argv[1]));
	printf("O: %d\n", atoi(argv[1]));
return 0;
}
