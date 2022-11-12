# include <stdio.h>
# include <string.h>
# include <unistd.h>

# include "../libft.h"


void test_ft_memmove(void)
{
	char fullstr[50] = "abcdefgh12345";

	char *source = fullstr;
	char *dest = fullstr + 8;
	int len = 10;

	printf("source: %s\n", source);
	printf("destination: %s\n", dest);

	ft_memmove(dest, source, len);
	printf("len: %d\n", len);
	printf("source: %s\n", source);
	printf("destination: %s\n", dest);
}
