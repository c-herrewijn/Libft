#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	size_t	i;
// 	int		result;

// 	i = 0;
// 	result = 0;
// 	while ((result == 0) && (i < n))
// 	{
// 		result = (unsigned char)s1[i] - (unsigned char)s2[i];
// 		if (s1[i] == '\0' || s2[i] == '\0')
// 			break ;
// 		i++;
// 	}
// 	return (result);
// }

void test_ft_strncmp(void)
{
	size_t n;
	
	char str1a[] = "hello";
	char str1b[] = "hello";
	n = 0;
	printf("strncmp('%s', '%s', %lu): %d\n", str1a, str1b, n, strncmp(str1a, str1b, n));
	printf("ft_strncmp('%s', '%s', %lu): %d\n", str1a, str1b, n, ft_strncmp(str1a, str1b, n));

	char str2a[] = "hello";
	char str2b[] = "hello";
	n = 4;
	printf("strncmp('%s', '%s', %lu): %d\n", str2a, str2b, n, strncmp(str2a, str2b, n));
	printf("ft_strncmp('%s', '%s', %lu): %d\n", str2a, str2b, n, ft_strncmp(str2a, str2b, n));

	char str3a[] = "hello";
	char str3b[] = "hello";
	n = 6;
	printf("strncmp('%s', '%s', %lu): %d\n", str3a, str3b, n, strncmp(str3a, str3b, n));
	printf("ft_strncmp('%s', '%s', %lu): %d\n", str3a, str3b, n, ft_strncmp(str3a, str3b, n));

	char str4a[] = "hello";
	char str4b[] = "hello";
	n = 7;
	printf("strncmp('%s', '%s', %lu): %d\n", str4a, str4b, n, strncmp(str4a, str4b, n));
	printf("ft_strncmp('%s', '%s', %lu): %d\n", str4a, str4b, n, ft_strncmp(str4a, str4b, n));

	char str5a[] = "hello";
	char str5b[] = "ff";
	n = 4;
	printf("strncmp('%s', '%s', %lu): %d\n", str5a, str5b, n, strncmp(str5a, str5b, n));
	printf("ft_strncmp('%s', '%s', %lu): %d\n", str5a, str5b, n, ft_strncmp(str5a, str5b, n));
	
	char str6a[] = "hello";
	char str6b[] = "hf";
	n = 4;
	printf("strncmp('%s', '%s', %lu): %d\n", str6a, str6b, n, strncmp(str6a, str6b, n));
	printf("ft_strncmp('%s', '%s', %lu): %d\n", str6a, str6b, n, ft_strncmp(str6a, str6b, n));
	
	char str7a[] = "hello";
	char str7b[] = "hef";
	n = 2;
	printf("strncmp('%s', '%s', %lu): %d\n", str7a, str7b, n, strncmp(str7a, str7b, n));
	printf("ft_strncmp('%s', '%s', %lu): %d\n", str7a, str7b, n, ft_strncmp(str7a, str7b, n));
	
	char str8a[] = "hello";
	char str8b[] = "hef";
	n = 3;
	printf("strncmp('%s', '%s', %lu): %d\n", str8a, str8b, n, strncmp(str8a, str8b, n));
	printf("ft_strncmp('%s', '%s', %lu): %d\n", str8a, str8b, n, ft_strncmp(str8a, str8b, n));
	
	char str9a[] = "hello";
	char str9b[] = "helloABC";
	n = 10;
	printf("strncmp('%s', '%s', %lu): %d\n", str9a, str9b, n, strncmp(str9a, str9b, n));
	printf("ft_strncmp('%s', '%s', %lu): %d\n", str9a, str9b, n, ft_strncmp(str9a, str9b, n));
}
