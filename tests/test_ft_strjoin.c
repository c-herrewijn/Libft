#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// /*
// stores the concatination of s1 and s2 in new memory
// */
// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*str;
// 	size_t	tot_len;

// 	tot_len = ft_strlen(s1) + ft_strlen(s2) + 1;
// 	str = (char *)ft_calloc(tot_len, sizeof(char));
// 	ft_strlcpy(str, s1, (tot_len * sizeof(char)));
// 	ft_strlcat(str, s2, (tot_len * sizeof(char)));
// 	return (str);
// }

void test_ft_strjoin(void)
{
	char str1[] = "abcdef";
	char str2[] = " test";

	printf("ft_strjoin: %s\n", ft_strjoin(str1, str2));
}