#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
// {
// 	size_t i;
// 	char *new_str;

// 	new_str = ft_calloc(ft_strlen(s) + 1, sizeof(char));
// 	i = 0;
// 	while (i < ft_strlen(s))
// 	{
// 		new_str[i] = f(i, s[i]);
// 		i++;
// 	}
// 	return (new_str);
// }

static char helper_increment(unsigned int num, char c)
{
	if (num > 1)
		return (c + 1);
	else
		return ('A');
}

void test_ft_strmapi(void)
{
	char teststr[] = "abcd";

	printf("aa\n");

	printf("ft_strmapi: %s\n", ft_strmapi(teststr, helper_increment));
}
