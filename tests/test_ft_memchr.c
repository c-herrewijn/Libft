#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < n)
// 	{
// 		if (*(unsigned char *)s == (unsigned char)c)
// 		{
// 			return ((void *)(s));
// 		}
// 		s++;
// 		i++;
// 	}
// 	return (NULL);
// }

void test_ft_memchr(void)
{
	size_t n;
	int c;

	char str1[] = "hello";
	c = 65;
	n = 6;
	printf("memchr('%s', %d, %lu): %p\n", str1, c, n, memchr(str1, c, n));
	printf("ft_memchr('%s', %d, %lu): %p\n", str1, c, n, ft_memchr(str1, c, n));

	char str2[] = "helloA";
	c = 65;
	n = 6;
	printf("memchr('%s', %d, %lu): %p\n", str2, c, n, memchr(str2, c, n));
	printf("ft_memchr('%s', %d, %lu): %p\n", str2, c, n, ft_memchr(str2, c, n));

	char str3[] = "helloaA";
	c = 65;
	n = 6;
	printf("memchr('%s', %d, %lu): %p\n", str3, c, n, memchr(str3, c, n));
	printf("ft_memchr('%s', %d, %lu): %p\n", str3, c, n, ft_memchr(str3, c, n));

	char str4[] = "";
	c = 65;
	n = 6;
	printf("memchr('%s', %d, %lu): %p\n", str4, c, n, memchr(str4, c, n));
	printf("ft_memchr('%s', %d, %lu): %p\n", str4, c, n, ft_memchr(str4, c, n));

	char str5[] = "hello";
	c = 0;
	n = 6;
	printf("memchr('%s', %d, %lu): %p\n", str5, c, n, memchr(str5, c, n));
	printf("ft_memchr('%s', %d, %lu): %p\n", str5, c, n, ft_memchr(str5, c, n));

	char str6[] = "hello";
	c = 0;
	n = 2;
	printf("memchr('%s', %d, %lu): %p\n", str6, c, n, memchr(str6, c, n));
	printf("ft_memchr('%s', %d, %lu): %p\n", str6, c, n, ft_memchr(str6, c, n));
}
