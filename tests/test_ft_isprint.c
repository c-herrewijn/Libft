#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// int	ft_isprint(int c)
// {
// 	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
// 		return (1);
// 	else
// 		return (0);
// }

int	ft_isprint(int c);

void test_ft_isprint(void)
{
    printf("isprint( ): %d; ft_isprint( ): %d\n", isprint(' '), ft_isprint(' '));
    printf("isprint(a): %d; ft_isprint(a): %d\n", isprint('a'), ft_isprint('a'));
    printf("isprint(b): %d; ft_isprint(b): %d\n", isprint('b'), ft_isprint('b'));
    printf("isprint(z): %d; ft_isprint(z): %d\n", isprint('z'), ft_isprint('z'));
    printf("isprint(A): %d; ft_isprint(A): %d\n", isprint('A'), ft_isprint('A'));
    printf("isprint(B): %d; ft_isprint(B): %d\n", isprint('B'), ft_isprint('B'));
    printf("isprint(Z): %d; ft_isprint(Z): %d\n", isprint('Z'), ft_isprint('Z'));
    printf("isprint(?): %d; ft_isprint(?): %d\n", isprint('?'), ft_isprint('?'));
    printf("isprint(\\t): %d, ft_isprint(\\t): %d\n", isprint('\t'), ft_isprint('\t'));
    printf("isprint(\\n): %d, ft_isprint(\\n): %d\n", isprint('\n'), ft_isprint('\n'));
    printf("isprint(95): %d; ft_isprint(95): %d\n", isprint(95), ft_isprint(95));
    printf("isprint(100): %d; ft_isprint(100): %d\n", isprint(100), ft_isprint(100));
    printf("isprint(31): %d; ft_isprint(31): %d\n", isprint(31), ft_isprint(31));
    printf("isprint(32): %d; ft_isprint(32)): %d\n", isprint(32), ft_isprint(32));
    printf("isprint(33): %d; ft_isprint(33): %d\n", isprint(33), ft_isprint(33));
    printf("isprint(126): %d; ft_isprint(126): %d\n", isprint(126), ft_isprint(126));
    printf("isprint(127): %d; ft_isprint(127): %d\n", isprint(127), ft_isprint(127));
    printf("isprint(200): %d; ft_isprint(200): %d\n", isprint(200), ft_isprint(200));
}
