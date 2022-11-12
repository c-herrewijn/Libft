#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }

void test_ft_putchar_fd(void)
{
	ft_putchar_fd('Q', 1);
	ft_putchar_fd('R', 1);
	ft_putchar_fd('S', 2);
	ft_putchar_fd('S', 0);
	ft_putchar_fd('S', -1);
}
