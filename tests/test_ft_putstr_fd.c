#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// void	ft_putstr_fd(char *s, int fd)
// {
// 	while (*s != '\0')
// 	{
// 		write(fd, s, 1);
// 		s++;
// 	}
// }

void test_ft_putstr_fd(void)
{
	ft_putstr_fd("QQQ", 1);
	ft_putstr_fd("RRR", 1);
	ft_putstr_fd("S", 2);
	ft_putstr_fd("TT", 0);
	ft_putstr_fd("UUU", -1);
}
