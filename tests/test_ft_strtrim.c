#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// /*
// creates a trimmed copy of s1 in new memory
// chars are trimmed from front and back, not from the middle
// */
// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char const	*s_start;
// 	char const	*s_end;

// 	s_start = s1;
// 	s_end = s1 + ft_strlen(s1);
// 	while (ft_strchr(set, (int)*s_start) != NULL && s_start < s_end)
// 		s_start++;
// 	while (ft_strchr(set, (int)*s_end) != NULL && s_start < s_end)
// 		s_end--;
// 	return (ft_substr(s_start, 0, (size_t)(s_end - s_start + 1)));
// }

void test_ft_strtrim(void)
{
	char str1[] = "abcd";
	char set1[] = " ";
	printf("ft_strtrim: %s\n", ft_strtrim(str1, set1));

	char str2[] = "  ab cd ";
	char set2[] = "._| ";
	printf("ft_strtrim: %s\n", ft_strtrim(str2, set2));

	char str3[] = " .  a_b cd__";
	char set3[] = "._| ";
	printf("ft_strtrim: %s\n", ft_strtrim(str3, set3));

	char str4[] = "";
	char set4[] = "._| ";
	printf("ft_strtrim: %s\n", ft_strtrim(str4, set4));
}
