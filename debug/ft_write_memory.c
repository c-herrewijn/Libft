
#include <stdlib.h>
#include <unistd.h>

void ft_writememory(void *m, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		write(1, (m + i), 1);
		i++;
	}
}

// int main(void)
// {
// 	char test[] = "hello";

// 	ft_writememory(test, 130);
// }