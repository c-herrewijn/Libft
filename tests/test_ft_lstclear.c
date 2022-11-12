#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

void del_str(void *str);

void del_str(void *str)
{
	if (str)
	{
		printf("freeing content: %s\n", (char *)str);
		free(str);
	}
}

void test_ft_lstclear(void)
{
	// normal case
	t_list	*start;
	t_list	*middle;
	t_list	*end;

	start = ft_lstnew(ft_strdup("aa"));
	printf("created pointer: %p\n", start);
	middle = ft_lstnew(ft_strdup("bb"));
	printf("created pointer: %p\n", middle);
	end = ft_lstnew(ft_strdup("cc"));
	printf("created pointer: %p\n", end);

	ft_lstadd_back(&start, middle);
	ft_lstadd_back(&start, end);

	ft_lstclear(&start, &del_str);

	// case solo
	// puts("case solo");
	// t_list	*solo;
	// solo = ft_lstnew(ft_strdup("aa"));
	// printf("p: %p\n", solo);
	// ft_lstclear(&solo, &del_str);
	// printf("p: %p\n", solo);


	// // edge case
	// puts("case non-initialized");
	// t_list	*empty;
	// empty = NULL;
	// ft_lstclear(&empty, &del_str);
}
