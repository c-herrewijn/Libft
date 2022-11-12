#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// /*
// copies a substring to new memory
// starting at position 'start' not more than 'len' chars
// copies not more chars than present in the string
// one extra byte is allocated for the new string, so it is null terminated
// note: 'start' is a zero-based index!
// if malloc fails, NULL is returned
// */
// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (i < start)
// 	{
// 		s++;
// 		i++;
// 	}
// 	return (ft_strndup(s, len));
// }

void test_ft_substr(void)
{
	char teststr[] = "AAAA";
	printf("ft_substr: %s\n", ft_substr("abcdefg", 2, 10)); // "cdefg"
	printf("ft_substr: %s\n", ft_substr("abcdefg", 2, 3)); // "cde"
	printf("ft_substr: %s\n", ft_substr("", 2, 10)); // ""
	printf("ft_substr: %s\n", ft_substr(teststr, 10, 10)); // ""
}
