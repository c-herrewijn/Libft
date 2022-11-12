#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// void	ft_putendl_fd(char *s, int fd)
// {
// 	ft_putstr_fd(s, fd);
// 	ft_putchar_fd('\n', fd);
// }

void test_ft_putendl_fd(void)
{
	ft_putendl_fd("QQQ", 1);
	ft_putendl_fd("RRR", 1);
	ft_putendl_fd("S", 2);
	ft_putendl_fd("TT", 0);
	ft_putendl_fd("UUU", -1);
}
