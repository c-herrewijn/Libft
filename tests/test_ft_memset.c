# include <stdio.h>
# include <string.h>
# include <unistd.h>

# include "../libft.h"

// void	*ft_memset(void *dest, int c, size_t len)
// {
// 	int		i;
// 	void	*p_iter;

// 	i = len;
// 	p_iter = dest;
// 	while (i)
// 	{
// 		*(unsigned char *)p_iter = c;
// 		p_iter++;
// 		i--;
// 	}
// 	return (dest);
// }


void test_ft_memset(void)
{
	void *r1;
	void *r2;
	char str1[] = "ABCD";
	char str2[] = "ABCD";
	
	r1 = memset(str1, '.', 2);
	r2 = ft_memset(str2, '.', 2);
	
	printf("result memset: %s; result ft_memset: %s\n", r1, r2);
}
