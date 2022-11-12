# include <stdio.h>
# include <string.h>
# include <unistd.h>

# include "../libft.h"

// void	ft_bzero(void *b, size_t n)
// {
// 	while (n)
// 	{
// 		*(unsigned char *)b = 0;
// 		b++;
// 		n--;
// 	}
// }

void test_ft_bzero(void)
{
	char str1[] = "ABCD";
	char str2[] = "ABCD";
	
	bzero(str1, 2);
	ft_bzero(str2, 2);

	write(1, str1, 4);
	write(1, "\n", 1);
	write(1, str2, 4);	
}
