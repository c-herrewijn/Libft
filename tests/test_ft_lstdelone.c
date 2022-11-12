#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// void del_str(void *str)
// {
// 	if (str)
// 	{
// 		printf("freeing content: %s\n", (char *)str);
// 		free(str);
// 	}
// }

void test_ft_lstdelone(void)
{
	t_list	*start;
	t_list	*middle;
	t_list	*end;

	start = ft_lstnew("aa");
	middle = ft_lstnew("bb");
	end = ft_lstnew("cc");

	printf("allocated pointer: %p\n", start);
	printf("allocated pointer: %p\n", middle);
	printf("allocated pointer: %p\n", end);

	puts("linking nodes...");
	ft_lstadd_back(&start, middle);
	ft_lstadd_back(&start, end);

	puts("node addresses after linking:");
	printf("pointer: %p\n", start);
	printf("pointer: %p\n", middle);
	printf("pointer: %p\n", end);
	printf("pointer: %p\n", start);
	printf("pointer: %p\n", start->next);
	printf("pointer: %p\n", start->next->next);

	puts("content:");
	printf("%s\n", start->content);
	printf("%s\n", start->next->content);
	printf("%s\n", start->next->next->content);
	printf("%s\n", start->content);
	printf("%s\n", middle->content);
	printf("%s\n", end->content);

	puts("deletion:");
	free(middle);
	free(start);
		
	printf("%s\n", start->content);
}
	//printf("%s\n", middle->content);
	
	// free(end);

	// ft_lstdelone(start, &del_str);

	// // printf("%s\n", middle->content);
	// printf("%s\n", end->content);
	
	// printf("%s\n", start->content);
	// printf("%s\n", middle->content);
	// printf("%s\n", end->content);

	// free(end);
	// ft_lstdelone(start->next, &del_str);

	// printf("%s\n", start->content);
	// printf("%s\n", middle->content);
	// printf("%s\n", end->content);

	//delete middle char
	
	
	// free(middle);
	// ft_lstdelone(middle, &del_str);
	// puts("deletion happened");

	// printf("%s\n", start->content);
	// printf("%s\n", middle->content);
	// printf("%s\n", end->content);
	// printf("%s\n", start->content);
	// printf("%s\n", start->next->content);
	// printf("%s\n", start->next->next->content);
