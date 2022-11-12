#include <stdio.h>
#include <ctype.h>

# include "../libft.h"

// int	ft_toupper(int c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	else
// 		return (c);
// }

void test_ft_toupper(void)
{
    printf("toupper( ): %c; ft_toupper( ): %c\n", (char)toupper(' '), (char)ft_toupper(' '));
    printf("toupper(a): %c; ft_toupper(a): %c\n", (char)toupper('a'), (char)ft_toupper('a'));
    printf("toupper(b): %c; ft_toupper(b): %c\n", (char)toupper('b'), (char)ft_toupper('b'));
    printf("toupper(z): %c; ft_toupper(z): %c\n", (char)toupper('z'), (char)ft_toupper('z'));
    printf("toupper(A): %c; ft_toupper(A): %c\n", (char)toupper('A'), (char)ft_toupper('A'));
    printf("toupper(B): %c; ft_toupper(B): %c\n", (char)toupper('B'), (char)ft_toupper('B'));
    printf("toupper(Z): %c; ft_toupper(Z): %c\n", (char)toupper('Z'), (char)ft_toupper('Z'));
    printf("toupper(?): %c; ft_toupper(?): %c\n", (char)toupper('?'), (char)ft_toupper('?'));
    printf("toupper(95): %c; ft_toupper(95): %c\n", (char)toupper(95), (char)ft_toupper(95));
    printf("toupper(100): %c; ft_toupper(100): %c\n", (char)toupper(100), (char)ft_toupper(100));
    printf("toupper(\\t): %c, ft_toupper(\\t): %c\n", (char)toupper('\t'), (char)ft_toupper('\t'));
    printf("toupper(\\n): %c, ft_toupper(\\n): %c\n", (char)toupper('\n'), (char)ft_toupper('\n'));
}
