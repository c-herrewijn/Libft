#include <stdio.h>
#include <ctype.h>

// int	ft_isalnum(int c)
// {
// 	if (c >= '0' && c <= '9')
// 		return (1);
// 	else
// 		return (0);
// }

int	ft_isalnum(int c);

void test_ft_isalnum(void)
{
    printf("isalnum('0'): %d; ft_isalnum('0'): %d\n", isalnum('0'), ft_isalnum('0'));
    printf("isalnum('1'): %d; ft_isalnum('1'): %d\n", isalnum('1'), ft_isalnum('1'));
    printf("isalnum('7'): %d; ft_isalnum('7'): %d\n", isalnum('7'), ft_isalnum('7'));
    printf("isalnum('9'): %d; ft_isalnum('9'): %d\n", isalnum('9'), ft_isalnum('9'));
    printf("isalnum(50): %d; ft_isalnum(50): %d\n", isalnum(50), ft_isalnum(50));
    
    printf("isalnum('0'-1): %d; ft_isalnum('0'-1): %d\n", isalnum('0'-1), ft_isalnum('0'-1));
    printf("isalnum('9'+1): %d; ft_isalnum('9'+1): %d\n", isalnum('9'+1), ft_isalnum('9'+1));
    printf("isalnum('3'-1): %d; ft_isalnum('3'-1): %d\n", isalnum('3'-1), ft_isalnum('3'-1));
    
    printf("isalnum(-1): %d; ft_isalnum(-1): %d\n", isalnum(-1), ft_isalnum(-1));
    printf("isalnum(0): %d; ft_isalnum(0): %d\n", isalnum(0), ft_isalnum(0));
    printf("isalnum(1): %d; ft_isalnum(1): %d\n", isalnum(1), ft_isalnum(1));
    printf("isalnum(7): %d; ft_isalnum(7): %d\n", isalnum(7), ft_isalnum(7));
    printf("isalnum(9): %d; ft_isalnum(9): %d\n", isalnum(9), ft_isalnum(9));
    printf("isalnum(10): %d; ft_isalnum(10): %d\n", isalnum(10), ft_isalnum(10));

    printf("isalnum( ): %d; ft_isalnum( ): %d\n", isalnum(' '), ft_isalnum(' '));
    printf("isalnum(a): %d; ft_isalnum(a): %d\n", isalnum('a'), ft_isalnum('a'));
    printf("isalnum(b): %d; ft_isalnum(b): %d\n", isalnum('b'), ft_isalnum('b'));
    printf("isalnum(z): %d; ft_isalnum(z): %d\n", isalnum('z'), ft_isalnum('z'));
    printf("isalnum(A): %d; ft_isalnum(A): %d\n", isalnum('A'), ft_isalnum('A'));
    printf("isalnum(B): %d; ft_isalnum(B): %d\n", isalnum('B'), ft_isalnum('B'));
    printf("isalnum(Z): %d; ft_isalnum(Z): %d\n", isalnum('Z'), ft_isalnum('Z'));
    printf("isalnum(?): %d; ft_isalnum(?): %d\n", isalnum('?'), ft_isalnum('?'));
    printf("isalnum(95): %d; ft_isalnum(95): %d\n", isalnum(95), ft_isalnum(95));
    printf("isalnum(100): %d; ft_isalnum(100): %d\n", isalnum(100), ft_isalnum(100));
    printf("isalnum(\\t): %d, ft_isalnum(\\t): %d\n", isalnum('\t'), ft_isalnum('\t'));
    printf("isalnum(\\n): %d, ft_isalnum(\\n): %d\n", isalnum('\n'), ft_isalnum('\n'));
}
