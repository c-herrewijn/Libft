#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// /* 
// Duplicates a string, and reseves memory via ft_calloc.
// */
// char	*ft_strdup(const char *s1)
// {
// 	size_t		len;
// 	size_t		i;
// 	const char	*s_iter;
// 	char		*s2;

// 	i = 0;
// 	len = 0;
// 	s_iter = s1;
// 	while (*s_iter)
// 	{
// 		len++;
// 		s_iter++;
// 	}
// 	s2 = (char *)ft_calloc(len + 1, sizeof(char));
// 	if (s2 == NULL)
// 		return (s2);
// 	while (i < len)
// 	{
// 		*(s2 + i) = *(s1 + i);
// 		i++;
// 	}
// 	return (s2);
// }

void test_ft_strdup(void)
{
	printf("strdup: %s\n", strdup("test"));
	printf("ft_strdup: %s\n", ft_strdup("test"));
	
	printf("strdup: %s\n", strdup("te\0st"));
	printf("ft_strdup: %s\n", ft_strdup("te\0st"));
}
