#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// void	*ft_calloc(size_t count, size_t size)
// {
// 	void			*str;
// 	unsigned int	i;

// 	str = malloc(count * size);
// 	if (str == NULL)
// 		return (str);
// 	i = 0;
// 	while (i < (count * size))
// 	{
// 		*(unsigned char *)(str + i) = '\0';
// 		i++;
// 	}
// 	return (str);
// }

void test_ft_calloc(void)
{
	size_t	count;
	size_t	size;
	void	*str;
	int i;
	
	count = 3;
	size = 5;

	printf("calloc('%lu', '%lu'): %p\n", count, size, calloc(count, size));
	str = ft_calloc(count, size);

	printf("\nft_calloc('%lu', '%lu'): %p\n", count, size, str);
	i = 0;;
	while (i < 15)
	{
		printf("%u.", *(unsigned char *)(str));
		i++;
		str++;
	}

	printf("\ncalloc('%lu', '%lu'): %p\n", count, size, calloc(count, size));

	printf("ft_calloc('%lu', '%lu'): %p\n", count, size, ft_calloc(count, size));
}
