#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// void	ft_putnbr_fd(int n, int fd)
// {
// 	int	num_to_write;

// 	if (n == -2147483648)
// 		write(fd, "-2147483648", 11);
// 	else
// 	{		
// 		if (n < 0)
// 		{
// 			n = n * (-1);
// 			write(fd, "-", 1);
// 		}
// 		if (n < 10)
// 		{
// 			num_to_write = n + 48;
// 			write(fd, &num_to_write, 1);
// 		}
// 		else
// 		{			
// 			ft_putnbr_fd(n / 10, fd);
// 			num_to_write = (n % 10) + 48;
// 			write(fd, &num_to_write, 1);
// 		}
// 	}
// }

void test_ft_putnbr_fd(void)
{
	ft_putnbr_fd(-1, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(1, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(12345, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(2147483647, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);
}