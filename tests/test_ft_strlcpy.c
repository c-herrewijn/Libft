# include <stdio.h>
# include <string.h>
# include <unistd.h>

# include "../libft.h"

void ft_writememory(void *m, size_t len);

// /*
// Copies src to dst; always null terminates
// Returns the length of src (excl. null terminator)
// */
// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	src_len;
// 	size_t	i;

// 	src_len = ft_strlen(src);
// 	if (dstsize == 0)
// 		return (src_len);
// 	i = 0;
// 	while (i < src_len && i < dstsize - 1)
// 	{
// 		*dst = *src;
// 		dst++;
// 		src++;
// 		i++;
// 	}
// 	*dst = 0;
// 	return (src_len);
// }

void test_ft_strlcpy(void)
{
	char src[] = "0123456789";
	// char src[10] = "12\0qwert";

	// // tests with chars
	// char dest1[10] = "ABCD";
	// printf("original function: strlcpy:\n");
	// printf("destination: %s\n", dest1);
	// printf("return val: %lu\n", strlcpy(dest1, src, 10));
	// printf("destination: %s\n", dest1);
	// // ft_writememory(dest1, 10);

	// char dest2[10] = "ABCD";
	// printf("\nnew function: ft_strlcpy:\n");
	// printf("destination: %s\n", dest2);
	// printf("return val: %lu\n", ft_strlcpy(dest2, src, 10));
	// printf("destination: %s\n", dest2);
	// // ft_writememory(dest2, 10);


	// tests zero source
	char dest3[10] = "ABCD";
	printf("original function: strlcpy:\n");
	printf("destination: %s\n", dest3);
	printf("return val: %lu\n", strlcpy(dest3, src, 1));
	printf("destination: %s\n", dest3);
	ft_writememory(dest3, 10);

	char dest4[10] = "ABCD";
	printf("\nnew function: ft_strlcpy:\n");
	printf("destination: %s\n", dest4);
	printf("return val: %lu\n", ft_strlcpy(dest4, src, 1));
	printf("destination: %s\n", dest4);
	ft_writememory(dest4, 10);
}
