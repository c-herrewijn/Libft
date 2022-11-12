#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

void test_ft_strnstr(void)
{
	size_t n;
	
	char h1[] = "hello";
	char n1[] = "";
	n = 7;
	printf("strnstr('%s', '%s', %lu): %p\n", h1, n1, n, strnstr(h1, n1, n));
	printf("ft_strnstr('%s', '%s', %lu): %p\n", h1, n1, n, ft_strnstr(h1, n1, n));
	
	char h2[] = "hello";
	char n2[] = "q";
	n = 7;
	printf("strnstr('%s', '%s', %lu): %p\n", h2, n2, n, strnstr(h2, n2, n));
	printf("ft_strnstr('%s', '%s', %lu): %p\n", h2, n2, n, ft_strnstr(h2, n2, n));
	
	char h3[] = "hello";
	char n3[] = "hello";
	n = 7;
	printf("strnstr('%s', '%s', %lu): %p\n", h3, n3, n, strnstr(h3, n3, n));
	printf("ft_strnstr('%s', '%s', %lu): %p\n", h3, n3, n, ft_strnstr(h3, n3, n));
		
	char h4[] = "aaaaahello";
	char n4[] = "hello";
	n = 7;
	printf("strnstr('%s', '%s', %lu): %p\n", h4, n4, n, strnstr(h4, n4, n));
	printf("ft_strnstr('%s', '%s', %lu): %p\n", h4, n4, n, ft_strnstr(h4, n4, n));

	char h5[] = "aaaaahello";
	char n5[] = "helloqqq";
	n = 7;
	printf("strnstr('%s', '%s', %lu): %p\n", h5, n5, n, strnstr(h5, n5, n));
	printf("ft_strnstr('%s', '%s', %lu): %p\n", h5, n5, n, ft_strnstr(h5, n5, n));

	char h6[] = "aaaaahello";
	char n6[] = "helloqqq";
	n = 5;
	printf("strnstr('%s', '%s', %lu): %p\n", h6, n6, n, strnstr(h6, n6, n));
	printf("ft_strnstr('%s', '%s', %lu): %p\n", h6, n6, n, ft_strnstr(h6, n6, n));

	char h7[] = "hello";
	char n7[] = "hel\0QQQ";
	n = 10;
	printf("strnstr('%s', '%s', %lu): %p\n", h7, n7, n, strnstr(h7, n7, n));
	printf("ft_strnstr('%s', '%s', %lu): %p\n", h7, n7, n, ft_strnstr(h7, n7, n));

	// francinette
	const char h8[] = "aaabcabcd";
	const char n8[] = "aabc";
	n = 0;
	printf("strnstr('%s', '%s', %lu): %p\n", h8, n8, n, strnstr(h8, n8, n));
	printf("ft_strnstr('%s', '%s', %lu): %p\n", h8, n8, n, ft_strnstr(h8, n8, n));
	n = 10;
	printf("strnstr('%s', '%s', %lu): %p\n", h8, n8, n, strnstr(h8, n8, n));
	printf("ft_strnstr('%s', '%s', %lu): %p\n", h8, n8, n, ft_strnstr(h8, n8, n));

	char h9[] = "aaa\0z";
	char n9[] = "z";
	n = 100;
	printf("strnstr('%s', '%s', %lu): %p\n", h9, n9, n, strnstr(h9, n9, n));
	printf("ft_strnstr('%s', '%s', %lu): %p\n", h9, n9, n, ft_strnstr(h9, n9, n));
}
