#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// char	*ft_strrchr(const char *s, int c)
// {
// 	const char	*str_i;

// 	str_i = s;
// 	while (*str_i)
// 	{
// 		str_i++;
// 	}
// 	while (str_i >= s)
// 	{
// 		if (*str_i == c)
// 			return ((char *)str_i);
// 		str_i--;
// 	}
// 	return (NULL);
// }

void test_ft_strrchr(void)
{
	const char test_str[] = "qabcad";
	
	printf("strrchr( ): %p; ft_strrchr( ): %p\n", strrchr(test_str, ' '), ft_strrchr(test_str, ' '));
	printf("strrchr(a): %p; ft_strrchr(a): %p\n", strrchr(test_str, 'a'), ft_strrchr(test_str, 'a'));
	printf("strrchr(b): %p; ft_strrchr(b): %p\n", strrchr(test_str, 'b'), ft_strrchr(test_str, 'b'));
	printf("strrchr(d): %p; ft_strrchr(d): %p\n", strrchr(test_str, 'd'), ft_strrchr(test_str, 'd'));
	printf("strrchr(\\0): %p; ft_strrchr(\\0): %p\n", strrchr(test_str, '\0'), ft_strrchr(test_str, '\0'));
	printf("strrchr(A): %p; ft_strrchr(A): %p\n", strrchr(test_str, 'A'), ft_strrchr(test_str, 'A'));
	printf("strrchr(95): %p; ft_strrchr(95): %p\n", strrchr(test_str, 95), ft_strrchr(test_str, 95));
	printf("strrchr(100): %p; ft_strrchr(100): %p\n", strrchr(test_str, 100), ft_strrchr(test_str, 100));
	printf("strrchr(200): %p; ft_strrchr(200): %p\n", strrchr(test_str, 200), ft_strrchr(test_str, 200));
	printf("strrchr(q): %p; ft_strrchr(q): %p\n", strrchr(test_str, 'q'), ft_strrchr(test_str, 'q'));
	printf("strrchr(q): %p; ft_strrchr(q): %p\n", strrchr(test_str+1, 'q'), ft_strrchr(test_str+1, 'q'));
	printf("strrchr(0): %p; ft_strrchr(0): %p\n", strrchr(test_str, 0), ft_strrchr(test_str, 0));
	printf("strchr(0): %p; ft_strchr(0): %p\n", strchr(test_str, 0), ft_strchr(test_str, 0));
}
