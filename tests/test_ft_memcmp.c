#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"


// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	size_t	i;
// 	int		result;

// 	i = 0;
// 	result = 0;
// 	while ((result == 0) && (i < n))
// 	{
// 		result = *(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i);
// 		if (result)
// 			return (result);
// 		i++;
// 	}
// 	return (result);
// }

void test_ft_memcmp(void)
{
	size_t n;
	
	char str1a[] = "hello";
	char str1b[] = "hello";
	n = 0;
	printf("memcmp('%s', '%s', %lu): %d\n", str1a, str1b, n, memcmp(str1a, str1b, n));
	printf("ft_memcmp('%s', '%s', %lu): %d\n", str1a, str1b, n, ft_memcmp(str1a, str1b, n));

	char str2a[] = "hello";
	char str2b[] = "hello";
	n = 4;
	printf("memcmp('%s', '%s', %lu): %d\n", str2a, str2b, n, memcmp(str2a, str2b, n));
	printf("ft_memcmp('%s', '%s', %lu): %d\n", str2a, str2b, n, ft_memcmp(str2a, str2b, n));

	char str3a[] = "hello";
	char str3b[] = "hello";
	n = 6;
	printf("memcmp('%s', '%s', %lu): %d\n", str3a, str3b, n, memcmp(str3a, str3b, n));
	printf("ft_memcmp('%s', '%s', %lu): %d\n", str3a, str3b, n, ft_memcmp(str3a, str3b, n));

	char str4a[] = "hello";
	char str4b[] = "hello";
	n = 7;
	printf("memcmp('%s', '%s', %lu): %d\n", str4a, str4b, n, memcmp(str4a, str4b, n));
	printf("ft_memcmp('%s', '%s', %lu): %d\n", str4a, str4b, n, ft_memcmp(str4a, str4b, n));

	char str5a[] = "hello";
	char str5b[] = "ff";
	n = 4;
	printf("memcmp('%s', '%s', %lu): %d\n", str5a, str5b, n, memcmp(str5a, str5b, n));
	printf("ft_memcmp('%s', '%s', %lu): %d\n", str5a, str5b, n, ft_memcmp(str5a, str5b, n));
	
	char str6a[] = "hello";
	char str6b[] = "hf";
	n = 4;
	printf("memcmp('%s', '%s', %lu): %d\n", str6a, str6b, n, memcmp(str6a, str6b, n));
	printf("ft_memcmp('%s', '%s', %lu): %d\n", str6a, str6b, n, ft_memcmp(str6a, str6b, n));
	
	char str7a[] = "hello";
	char str7b[] = "hef";
	n = 2;
	printf("memcmp('%s', '%s', %lu): %d\n", str7a, str7b, n, memcmp(str7a, str7b, n));
	printf("ft_memcmp('%s', '%s', %lu): %d\n", str7a, str7b, n, ft_memcmp(str7a, str7b, n));
	
	char str8a[] = "hello";
	char str8b[] = "hef";
	n = 3;
	printf("memcmp('%s', '%s', %lu): %d\n", str8a, str8b, n, memcmp(str8a, str8b, n));
	printf("ft_memcmp('%s', '%s', %lu): %d\n", str8a, str8b, n, ft_memcmp(str8a, str8b, n));
	
	char str9a[] = "hello";
	char str9b[] = "helloABC";
	n = 10;
	printf("memcmp('%s', '%s', %lu): %d\n", str9a, str9b, n, memcmp(str9a, str9b, n));
	printf("ft_memcmp('%s', '%s', %lu): %d\n", str9a, str9b, n, ft_memcmp(str9a, str9b, n));
}
