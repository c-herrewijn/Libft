#include <stdio.h>
#include <ctype.h>

# include "../libft.h"

// int	ft_tolower(int c)
// {
// 	if (c >= 'A' && c <= 'Z')
// 		return (c + 32);
// 	else
// 		return (c);
// }

void test_ft_tolower(void)
{
    printf("tolower( ): %c; ft_tolower( ): %c\n", (char)tolower(' '), (char)ft_tolower(' '));
    printf("tolower(a): %c; ft_tolower(a): %c\n", (char)tolower('a'), (char)ft_tolower('a'));
    printf("tolower(b): %c; ft_tolower(b): %c\n", (char)tolower('b'), (char)ft_tolower('b'));
    printf("tolower(z): %c; ft_tolower(z): %c\n", (char)tolower('z'), (char)ft_tolower('z'));
    printf("tolower(A): %c; ft_tolower(A): %c\n", (char)tolower('A'), (char)ft_tolower('A'));
    printf("tolower(B): %c; ft_tolower(B): %c\n", (char)tolower('B'), (char)ft_tolower('B'));
    printf("tolower(Z): %c; ft_tolower(Z): %c\n", (char)tolower('Z'), (char)ft_tolower('Z'));
    printf("tolower(?): %c; ft_tolower(?): %c\n", (char)tolower('?'), (char)ft_tolower('?'));
    printf("tolower(95): %c; ft_tolower(95): %c\n", (char)tolower(95), (char)ft_tolower(95));
    printf("tolower(100): %c; ft_tolower(100): %c\n", (char)tolower(100), (char)ft_tolower(100));
    printf("tolower(\\t): %c, ft_tolower(\\t): %c\n", (char)tolower('\t'), (char)ft_tolower('\t'));
    printf("tolower(\\n): %c, ft_tolower(\\n): %c\n", (char)tolower('\n'), (char)ft_tolower('\n'));
}
