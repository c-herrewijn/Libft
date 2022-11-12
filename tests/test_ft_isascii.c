#include <stdio.h>
#include <ctype.h>

// int	ft_isascii(int c)
// {
// 	if (c >= '0' && c <= '9')
// 		return (1);
// 	else
// 		return (0);
// }

int	ft_isascii(int c);

void test_ft_isascii(void)
{
    printf("isascii('0'): %d; ft_isascii('0'): %d\n", isascii('0'), ft_isascii('0'));
    printf("isascii('1'): %d; ft_isascii('1'): %d\n", isascii('1'), ft_isascii('1'));
    printf("isascii('7'): %d; ft_isascii('7'): %d\n", isascii('7'), ft_isascii('7'));
    printf("isascii('9'): %d; ft_isascii('9'): %d\n", isascii('9'), ft_isascii('9'));
    printf("isascii(50): %d; ft_isascii(50): %d\n", isascii(50), ft_isascii(50));
    
    printf("isascii('0'-1): %d; ft_isascii('0'-1): %d\n", isascii('0'-1), ft_isascii('0'-1));
    printf("isascii('9'+1): %d; ft_isascii('9'+1): %d\n", isascii('9'+1), ft_isascii('9'+1));
    printf("isascii('3'-1): %d; ft_isascii('3'-1): %d\n", isascii('3'-1), ft_isascii('3'-1));
    
    printf("isascii(-1): %d; ft_isascii(-1): %d\n", isascii(-1), ft_isascii(-1));
    printf("isascii(0): %d; ft_isascii(0): %d\n", isascii(0), ft_isascii(0));
    printf("isascii(1): %d; ft_isascii(1): %d\n", isascii(1), ft_isascii(1));
    printf("isascii(7): %d; ft_isascii(7): %d\n", isascii(7), ft_isascii(7));
    printf("isascii(9): %d; ft_isascii(9): %d\n", isascii(9), ft_isascii(9));
    printf("isascii(10): %d; ft_isascii(10): %d\n", isascii(10), ft_isascii(10));

    printf("isascii( ): %d; ft_isascii( ): %d\n", isascii(' '), ft_isascii(' '));
    printf("isascii(a): %d; ft_isascii(a): %d\n", isascii('a'), ft_isascii('a'));
    printf("isascii(b): %d; ft_isascii(b): %d\n", isascii('b'), ft_isascii('b'));
    printf("isascii(z): %d; ft_isascii(z): %d\n", isascii('z'), ft_isascii('z'));
    printf("isascii(A): %d; ft_isascii(A): %d\n", isascii('A'), ft_isascii('A'));
    printf("isascii(B): %d; ft_isascii(B): %d\n", isascii('B'), ft_isascii('B'));
    printf("isascii(Z): %d; ft_isascii(Z): %d\n", isascii('Z'), ft_isascii('Z'));
    printf("isascii(?): %d; ft_isascii(?): %d\n", isascii('?'), ft_isascii('?'));
    printf("isascii(95): %d; ft_isascii(95): %d\n", isascii(95), ft_isascii(95));
    printf("isascii(100): %d; ft_isascii(100): %d\n", isascii(100), ft_isascii(100));
    printf("isascii(\\t): %d, ft_isascii(\\t): %d\n", isascii('\t'), ft_isascii('\t'));
    
    printf("isascii(127): %d, ft_isascii(127): %d\n", isascii(127), ft_isascii(127));
    printf("isascii(128): %d, ft_isascii(128): %d\n", isascii(128), ft_isascii(128));
    printf("isascii(200): %d, ft_isascii(200): %d\n", isascii(200), ft_isascii(200));
}
