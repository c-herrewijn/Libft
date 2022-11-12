# include <stdio.h>
# include <string.h>

# include "../libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	size_t	c;

// 	c = 0;
// 	while (*s)
// 	{
// 		s++;
// 		c++;
// 	}
// 	return (c);
// }

void test_ft_strlen(void)
{
	printf("strlen(""): %zu; ft_strlen(""): %zu\n", strlen(""), ft_strlen(""));
	printf("strlen(\"hello\thello\"): %zu; ft_strlen(\"hello\thello\"): %zu\n", strlen("hello\thello"), ft_strlen("hello\thello"));
	printf("strlen(\"12345\"): %zu; ft_strlen(\"12345\"): %zu\n", strlen("12345"), ft_strlen("12345"));
}