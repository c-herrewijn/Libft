#include <stdio.h>
#include <ctype.h>

// int	ft_isalpha(int c)
// {
// 	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
// 		return (1);
// 	else
// 		return (0);
// }

int	ft_isalpha(int c);

void test_ft_isalpha(void)
{
    printf("isalpha( ): %d; ft_isalpha( ): %d\n", isalpha(' '), ft_isalpha(' '));
    printf("isalpha(a): %d; ft_isalpha(a): %d\n", isalpha('a'), ft_isalpha('a'));
    printf("isalpha(b): %d; ft_isalpha(b): %d\n", isalpha('b'), ft_isalpha('b'));
    printf("isalpha(z): %d; ft_isalpha(z): %d\n", isalpha('z'), ft_isalpha('z'));
    printf("isalpha(A): %d; ft_isalpha(A): %d\n", isalpha('A'), ft_isalpha('A'));
    printf("isalpha(B): %d; ft_isalpha(B): %d\n", isalpha('B'), ft_isalpha('B'));
    printf("isalpha(Z): %d; ft_isalpha(Z): %d\n", isalpha('Z'), ft_isalpha('Z'));
    printf("isalpha(?): %d; ft_isalpha(?): %d\n", isalpha('?'), ft_isalpha('?'));
    printf("isalpha(95): %d; ft_isalpha(95): %d\n", isalpha(95), ft_isalpha(95));
    printf("isalpha(100): %d; ft_isalpha(100): %d\n", isalpha(100), ft_isalpha(100));
    printf("isalpha(\\t): %d, ft_isalpha(\\t): %d\n", isalpha('\t'), ft_isalpha('\t'));
    printf("isalpha(\\n): %d, ft_isalpha(\\n): %d\n", isalpha('\n'), ft_isalpha('\n'));
}
