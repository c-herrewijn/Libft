#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// char	*ft_strchr(const char *s, int c)
// {
// 	if (c == 0)
// 	{
// 		while (*s)
// 			s++;
// 		return ((char *)s);
// 	}
// 	while (*s)
// 	{
// 		if (*s == c)
// 			return ((char *)s);
// 		s++;
// 	}
// 	return (NULL);
// }

void test_ft_strchr(void)
{
	const char test_str[] = "tripouille";
	
	printf("strchr( ): %p; ft_strchr( ): %p\n", strchr(test_str, ' '), ft_strchr(test_str, ' '));
	printf("strchr(a): %p; ft_strchr(a): %p\n", strchr(test_str, 'a'), ft_strchr(test_str, 'a'));
	printf("strchr(b): %p; ft_strchr(b): %p\n", strchr(test_str, 'b'), ft_strchr(test_str, 'b'));
	printf("strchr(d): %p; ft_strchr(d): %p\n", strchr(test_str, 'd'), ft_strchr(test_str, 'd'));
	printf("strchr(\\0): %p; ft_strchr(\\0): %p\n", strchr(test_str, '\0'), ft_strchr(test_str, '\0'));
	printf("strchr(0): %p; ft_strchr(0): %p\n", strchr(test_str, 0), ft_strchr(test_str, 0));
	printf("strchr(A): %p; ft_strchr(A): %p\n", strchr(test_str, 'A'), ft_strchr(test_str, 'A'));
	printf("strchr(95): %p; ft_strchr(95): %p\n", strchr(test_str, 95), ft_strchr(test_str, 95));
	printf("strchr(100): %p; ft_strchr(100): %p\n", strchr(test_str, 100), ft_strchr(test_str, 100));
	printf("strchr(200): %p; ft_strchr(200): %p\n", strchr(test_str, 200), ft_strchr(test_str, 200));
	printf("strchr('t' + 256): %p; ft_strchr('t' + 256): %p\n", strchr(test_str, 't' + 256), ft_strchr(test_str, 't' + 256));

	// printf("my func: %s\n", ft_strchr(str, 't' + 256));
}
