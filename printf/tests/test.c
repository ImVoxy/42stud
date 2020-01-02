#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char a = argv[1][0];
	char *b = argv[2];
	int c = atoi(argv[3]);
	unsigned int d = atoi(argv[4]);

	printf ("%c\n", a);
	printf ("%s\n", b);
	printf ("%p\n", b);
	printf ("%d\n", c);
	printf ("%i\n", c);
	printf ("%u\n", d);
	printf ("%x\n", d);
	printf ("%X\n\n", d);

	printf ("%+i\n", d);
	printf ("%+i\n", c);
	printf ("%-i\n", d);
	printf ("%80.50i\n", d);
	printf ("%50i\n", d);
	printf ("%53.04i\n", d);
	printf ("??%.i\n", d);
	printf ("%01845X\n\n", d);

	printf ("%-s\n", b);
	printf ("%80.50s\n", b);
	printf ("%50s\n", b);
	printf ("%53.04s\n", b);
	printf ("??%.s\n", b);


	return (0);
}
