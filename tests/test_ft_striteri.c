#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// void	ft_striteri(char *s, void (*f)(unsigned int, char*))
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < ft_strlen(s))
// 	{
// 		f(i, s + i);
// 		i++;
// 	}
// }

static void helper_increment(unsigned int num, char *str)
{
	if (num > 1)
		*str = (*str) + 1;
	else
		*str = 'A';
}

void test_ft_striteri(void)
{
	char teststr[] = "abcd";

	ft_striteri(teststr, helper_increment);
	printf("ft_striteri: %s\n", teststr);
}
