#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// int	ft_atoi(const char *str)
// {
// 	long int	num;
// 	int			sign;

// 	num = 0;
// 	sign = 1;
// 	if (*str == '-')
// 		sign = -1;
// 	if (*str == '-' || *str == '+')
// 		str++;
// 	while (*str)
// 	{
// 		if (!ft_isdigit((int)(*str)))
// 		{
// 			break ;
// 		}
// 		num = num * 10;
// 		num = num + ((*str) - 48);
// 		str++;
// 	}
// 	return ((sign) * (num));
// }

void test_ft_atoi(void)
{
	const char s1[] = "42421";
	printf("atoi('%s'): %d\n", s1, atoi(s1));
	printf("ft_atoi('%s'): %d\n", s1, ft_atoi(s1));
	
	const char s2[] = "424a21";
	printf("atoi('%s'): %d\n", s2, atoi(s2));
	printf("ft_atoi('%s'): %d\n", s2, ft_atoi(s2));
	
	const char s3[] = "a424a21";
	printf("atoi('%s'): %d\n", s3, atoi(s3));
	printf("ft_atoi('%s'): %d\n", s3, ft_atoi(s3));

	const char s4[] = "-424a21";
	printf("atoi('%s'): %d\n", s4, atoi(s4));
	printf("ft_atoi('%s'): %d\n", s4, ft_atoi(s4));

	// max
	const char s5[] = "2147483647";
	printf("atoi('%s'): %d\n", s5, atoi(s5));
	printf("ft_atoi('%s'): %d\n", s5, ft_atoi(s5));

	// min
	const char s6[] = "-2147483648";
	printf("atoi('%s'): %d\n", s6, atoi(s6));
	printf("ft_atoi('%s'): %d\n", s6, ft_atoi(s6));

	// // jan
	// const char s6[] = "-214748364821474836482147483648";
	// printf("atoi('%s'): %d\n", s6, atoi(s6));
	// printf("ft_atoi('%s'): %d\n", s6, ft_atoi(s6));

	// too large
	const char s7[] = "21474836470";
	printf("atoi('%s'): %d\n", s7, atoi(s7));
	printf("ft_atoi('%s'): %d\n", s7, ft_atoi(s7));

	// too large 2
	const char s7b[] = "2147483648";
	printf("atoi('%s'): %d\n", s7b, atoi(s7b));
	printf("ft_atoi('%s'): %d\n", s7b, ft_atoi(s7b));
	
	// too small
	const char s8[] = "-21474836470";
	printf("atoi('%s'): %d\n", s8, atoi(s8));
	printf("ft_atoi('%s'): %d\n", s8, ft_atoi(s8));
	
	// invalid
	const char s9[] = "--470";
	printf("atoi('%s'): %d\n", s9, atoi(s9));
	printf("ft_atoi('%s'): %d\n", s9, ft_atoi(s9));
	
	// invalid
	const char s10[] = "\0470";
	printf("atoi('%s'): %d\n", s10, atoi(s10));
	printf("ft_atoi('%s'): %d\n", s10, ft_atoi(s10));

	const char s11[] = "12*12";
	printf("atoi('%s'): %d\n", s11, atoi(s11));
	printf("ft_atoi('%s'): %d\n", s11, ft_atoi(s11));

	const char s12[] = "-";
	printf("atoi('%s'): %d\n", s12, atoi(s12));
	printf("ft_atoi('%s'): %d\n", s12, ft_atoi(s12));

	const char s13[] = "+175";
	printf("atoi('%s'): %d\n", s13, atoi(s13));
	printf("ft_atoi('%s'): %d\n", s13, ft_atoi(s13));

	const char s14[] = "  +175";
	printf("atoi('%s'): %d\n", s14, atoi(s14));
	printf("ft_atoi('%s'): %d\n", s14, ft_atoi(s14));
	
	// invalid
	const char s15[] = "  ++175";
	printf("atoi('%s'): %d\n", s15, atoi(s15));
	printf("ft_atoi('%s'): %d\n", s15, ft_atoi(s15));
}
