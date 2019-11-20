#include "../libft.h"

int main ()
{
	const char *str;

	char *pouet = "z";
	char *lolzer = (char *)&pouet[2];
	lolzer = "aaaaaaaaaa";
	str = ft_memchr(pouet, 'a', 50);

	ft_memchr(pouet, 'a', 50);
//	memchr(pouet, 'a', 50);

	return (0);
}
