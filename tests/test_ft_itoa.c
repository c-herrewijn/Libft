#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

void test_ft_itoa(void)
{
	int i;

	i = -5859;
	printf("ft_itoa(%d): %s\n", i, ft_itoa(i));

	// i = 12345;
	// printf("ft_itoa(%d): %s\n", i, ft_itoa(i));

	// i = 7;
	// printf("ft_itoa(%d): %s\n", i, ft_itoa(i));

	// i = 25;
	// printf("ft_itoa(%d): %s\n", i, ft_itoa(i));

	// i = -25;
	// printf("ft_itoa(%d): %s\n", i, ft_itoa(i));
	
	// i = 1000;
	// printf("ft_itoa(%d): %s\n", i, ft_itoa(i));
	
	// i = 0;
	// printf("ft_itoa(%d): %s\n", i, ft_itoa(i));

	// i = 2147483647;
	// printf("ft_itoa(%d): %s\n", i, ft_itoa(i));

	// i = -2147483648;
	// printf("ft_itoa(%d): %s\n", i, ft_itoa(i));
}
