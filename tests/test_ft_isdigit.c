#include <stdio.h>
#include <ctype.h>

// int	ft_isdigit(int c)
// {
// 	if (c >= '0' && c <= '9')
// 		return (1);
// 	else
// 		return (0);
// }

int	ft_isdigit(int c);

void test_ft_isdigit(void)
{
    printf("isdigit('0'): %d; ft_isdigit('0'): %d\n", isdigit('0'), ft_isdigit('0'));
    printf("isdigit('1'): %d; ft_isdigit('1'): %d\n", isdigit('1'), ft_isdigit('1'));
    printf("isdigit('7'): %d; ft_isdigit('7'): %d\n", isdigit('7'), ft_isdigit('7'));
    printf("isdigit('9'): %d; ft_isdigit('9'): %d\n", isdigit('9'), ft_isdigit('9'));
    printf("isdigit(50): %d; ft_isdigit(50): %d\n", isdigit(50), ft_isdigit(50));
    
    printf("isdigit('0'-1): %d; ft_isdigit('0'-1): %d\n", isdigit('0'-1), ft_isdigit('0'-1));
    printf("isdigit('9'+1): %d; ft_isdigit('9'+1): %d\n", isdigit('9'+1), ft_isdigit('9'+1));
    printf("isdigit('3'-1): %d; ft_isdigit('3'-1): %d\n", isdigit('3'-1), ft_isdigit('3'-1));
    
    printf("isdigit(-1): %d; ft_isdigit(-1): %d\n", isdigit(-1), ft_isdigit(-1));
    printf("isdigit(0): %d; ft_isdigit(0): %d\n", isdigit(0), ft_isdigit(0));
    printf("isdigit(1): %d; ft_isdigit(1): %d\n", isdigit(1), ft_isdigit(1));
    printf("isdigit(7): %d; ft_isdigit(7): %d\n", isdigit(7), ft_isdigit(7));
    printf("isdigit(9): %d; ft_isdigit(9): %d\n", isdigit(9), ft_isdigit(9));
    printf("isdigit(10): %d; ft_isdigit(10): %d\n", isdigit(10), ft_isdigit(10));

    printf("isdigit( ): %d; ft_isdigit( ): %d\n", isdigit(' '), ft_isdigit(' '));
    printf("isdigit(a): %d; ft_isdigit(a): %d\n", isdigit('a'), ft_isdigit('a'));
    printf("isdigit(b): %d; ft_isdigit(b): %d\n", isdigit('b'), ft_isdigit('b'));
    printf("isdigit(z): %d; ft_isdigit(z): %d\n", isdigit('z'), ft_isdigit('z'));
    printf("isdigit(A): %d; ft_isdigit(A): %d\n", isdigit('A'), ft_isdigit('A'));
    printf("isdigit(B): %d; ft_isdigit(B): %d\n", isdigit('B'), ft_isdigit('B'));
    printf("isdigit(Z): %d; ft_isdigit(Z): %d\n", isdigit('Z'), ft_isdigit('Z'));
    printf("isdigit(?): %d; ft_isdigit(?): %d\n", isdigit('?'), ft_isdigit('?'));
    printf("isdigit(95): %d; ft_isdigit(95): %d\n", isdigit(95), ft_isdigit(95));
    printf("isdigit(100): %d; ft_isdigit(100): %d\n", isdigit(100), ft_isdigit(100));
    printf("isdigit(\\t): %d, ft_isdigit(\\t): %d\n", isdigit('\t'), ft_isdigit('\t'));
    printf("isdigit(\\n): %d, ft_isdigit(\\n): %d\n", isdigit('\n'), ft_isdigit('\n'));
}
