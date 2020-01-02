#include <stdarg.h>
#include <stdio.h>

	void	test_printf(char *c, ...)
{
	va_list ap;
	va_start (ap, c);
	printf("%s\n", c);
	printf("%s\n", va_arg(ap, char *));
	printf("%s\n", va_arg(ap, char *));
	va_end(ap);
}

int main(int argc, char **argv)
{
	char *test = "bonjour";
	char *test1 = argv[1];
	char *test2 = argv[2];
	char *test3 = argv[3];
	test_printf(test, test1, test2, test3);
return (0);
}
