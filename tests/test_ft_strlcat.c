# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>

# include "../libft.h"

void ft_writememory(void *m, size_t len);

// /*
// Concatenates src and dst; always null terminates
// Returns the sum of the original destination length and source length
// */
// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	src_len;
// 	size_t	dst_len;
// 	size_t	i;

// 	src_len = ft_strlen(src);
// 	dst_len = ft_strlen(dst);
// 	i = 0;
// 	while (i < src_len && i < dstsize - dst_len - 1)
// 	{
// 		*(dst + dst_len + i) = *src;
// 		src++;
// 		i++;
// 	}
// 	*(dst + dst_len + i) = 0;
// 	return (src_len + dst_len);
// }

void test_ft_strlcat(void)
{

	// tests with chars
	char src[10] = "123456789";
	char dest1[10] = "ABCD";
	char dest2[10] = "ABCD";
	printf("original function: strlcat:\n");
	printf("destination: %s\n", dest1);
	printf("return val: %lu\n", strlcat(dest1, src, 10));
	printf("destination: %s\n", dest1);

	printf("new function: ft_strlcat:\n");
	printf("destination: %s\n", dest2);
	printf("return val: %lu\n", ft_strlcat(dest2, src, 10));
	printf("destination: %s\n", dest2);
	
	char src3[] = "with blueberries";
	char dest3[40] = "pancakes ";
	printf("original function: strlcat:\n");
	printf("destination: %s\n", dest3);
	printf("return val: %lu\n", strlcat(dest3, src3, 40));
	printf("destination: %s\n", dest3);

	char src4[] = "with blueberries";
	char dest4[40] = "pancakes ";
	printf("new function: ft_strlcat:\n");
	printf("destination: %s\n", dest4);
	printf("return val: %lu\n", ft_strlcat(dest4, src4, 40));
	printf("destination: %s\n", dest4);

	char src5[20] = "12\0qwert";
	char dest5[20] = "ABCD";
	printf("original function: strlcat:\n");
	printf("destination: %s\n", dest5);
	printf("return val: %lu\n", strlcat(dest5, src5, 20));
	printf("destination: %s\n", dest5);

	char src6[20] = "12\0qwert";
	char dest6[20] = "ABCD";
	printf("new function: ft_strlcat:\n");
	printf("destination: %s\n", dest6);
	printf("return val: %lu\n", ft_strlcat(dest6, src6, 20));
	printf("destination: %s\n", dest6);

	// // test with NULL; -> if either src or dst = NULL -> segfault
	// char src7[] = "aa";
	// char *dest7 = NULL;
	// printf("original function: strlcat:\n");
	// printf("destination: %s\n", dest7);
	// printf("return val: %lu\n", strlcat(dest7, src7, 20));
	// printf("destination: %s\n", dest7);

	// char src8[] = "aa";
	// char *dest8 = NULL;
	// printf("new function: ft_strlcat:\n");
	// printf("destination: %s\n", dest8);
	// printf("return val: %lu\n", ft_strlcat(dest8, src8, 20));
	// printf("destination: %s\n", dest8);

	// ft_writememory(dest5, 10);
	// puts("\n");
	// ft_writememory(dest6, 10);
	
	// extra tests
	char src9[] = "55555";
	char dest9[19] = "4444";
	printf("original function: strlcat:\n");
	printf("destination: %s\n", dest9);
	printf("return val: %lu\n", strlcat(dest9, src9, 10));
	printf("destination: %s\n", dest9);

	char src10[] = "55555";
	char dest10[30] = "4444";
	printf("new function: ft_strlcat:\n");
	printf("destination: %s\n", dest10);
	printf("return val: %lu\n", ft_strlcat(dest10, src10, 10));
	printf("destination: %s\n", dest10);


	// Tripouille 1: minus one
	char *dest11 = &dest10[0]; 
	ft_memset(dest11, 0, 30);
	ft_memset(dest11, 'C', 5);

	char * src11 = (char *)"AAAAAAAAA";
	printf("original function: strlcat:\n");
	printf("destination: %s\n", dest11);
	printf("return val: %lu\n", strlcat(dest11, src11, -1));
	printf("destination: %s\n", dest11);

	char *dest12 = &dest10[0]; 
	ft_memset(dest12, 0, 30);
	ft_memset(dest12, 'C', 5);

	char * src12 = (char *)"AAAAAAAAA";
	printf("new function: ft_strlcat:\n");
	printf("destination: %s\n", dest12);
	printf("return val: %lu\n", ft_strlcat(dest12, src12, -1));
	printf("destination: %s\n", dest12);

	// Tripouille 2: other
	char *dest13 = &dest10[0]; 
	ft_memset(dest13, 0, 30);
	ft_memset(dest13, 'B', 1);

	char * src13 = (char *)"AAAAAAAAA";
	printf("original function: strlcat:\n");
	printf("destination: %s\n", dest13);
	printf("return val: %lu\n", strlcat(dest13, src13, 0));
	printf("destination: %s\n", dest13);

	char *dest14 = &dest10[0]; 
	ft_memset(dest14, 0, 30);
	ft_memset(dest14, 'B', 1);

	char * src14 = (char *)"AAAAAAAAA";
	printf("new function: ft_strlcat:\n");
	printf("destination: %s\n", dest14);
	printf("return val: %lu\n", ft_strlcat(dest14, src14, 0));
	printf("destination: %s\n", dest14);

}
