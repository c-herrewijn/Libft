# include <stdio.h>
# include <string.h>
# include <unistd.h>

# include "../libft.h"

// void	*ft_memcpy(void *dst, const void *src, size_t n)
// {
// 	void		*p_dst_iter;

// 	if (dst == NULL && src == NULL)
// 		return (NULL);
// 	p_dst_iter = dst;
// 	while (n)
// 	{
// 		*(unsigned char *)p_dst_iter = *(unsigned char *)src;
// 		src++;
// 		p_dst_iter++;
// 		n--;
// 	}
// 	return (dst);
// }

void test_ft_memcpy(void)
{
	char src[] = "123456";
	char dest1[] = "ABCD";
	char dest2[] = "ABCD";
	int dest3[] = {7, 8 ,9 ,10};
	int dest4[] = {7, 8 ,9 ,10};
	int src_int[] = {100000255, 98, 99, 100};
	
	// tests with chars
	printf("original function: memcpy:\n");
	printf("destination: %s\n", dest1);
	printf("return val: %s\n", memcpy(dest1, src, 2));
	printf("destination: %s\n", dest1);

	printf("new function: ft_memcpy:\n");
	printf("destination: %s\n", dest2);
	printf("return val: %s\n", ft_memcpy(dest2, src, 2));
	printf("destination: %s\n", dest2);

	// test with ints: 2 chars are copied, so only the first halve of the first integer.
	printf("original function: memcpy:\n");
	printf("destination: %d, %d, %d, %d\n", dest3[0], dest3[1], dest3[2], dest3[3]);
	printf("return val: %d\n", *(int *)memcpy(dest3, src_int, 2));  
	printf("destination: %d, %d, %d, %d\n", dest3[0], dest3[1], dest3[2], dest3[3]);

	printf("new function: memcpy:\n");
	printf("destination: %d, %d, %d, %d\n", dest4[0], dest4[1], dest4[2], dest4[3]);
	printf("return val: %d\n", *(int *)ft_memcpy(dest4, src_int, 2));
	printf("destination: %d, %d, %d, %d\n", dest4[0], dest4[1], dest4[2], dest4[3]);

	// tests 2x NULL chars
	char *src5 = NULL;
	char *dest5 = NULL;
	printf("AAoriginal function: memcpy:\n");
	printf("return val: %s\n", memcpy(dest5, src5, 2));
	printf("destination: %s\n", dest5);

	char *src6 = NULL;
	char *dest6 = NULL;
	printf("AAnew function: ft_memcpy:\n");
	printf("return val: %s\n", ft_memcpy(dest6, src6, 2));
	printf("destination: %s\n", dest6);

}
