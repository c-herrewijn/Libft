#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*new;

// 	new = malloc(sizeof(t_list));
// 	if (new == NULL)
// 		return (NULL);
// 	new->content = content;
// 	new->next = NULL;
// 	return (new);
// }

void test_ft_lstnew(void)
{
	char str[] = "hello";
	int i = 42;
	t_list *first_item;

	first_item = ft_lstnew((void *)str);
	printf("result: %s\n",(char *)first_item->content);

	first_item = ft_lstnew((void *)&i);
	printf("result: %d\n",*(int *)first_item->content);
}
