#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// int	ft_lstsize(t_list *lst)
// {
// 	int	count;

// 	if (lst == NULL)
// 		return (0);
// 	count = 1;
// 	while (lst->next)
// 	{
// 		lst = lst->next;
// 		count++;
// 	}
// 	return (count);
// }

void test_ft_lstsize(void)
{
	int i;

	t_list	*front;
	t_list	*middle;
	t_list	*end;

	front = ft_lstnew((char *)"cc");
	middle = ft_lstnew((char *)"bb");
	end = ft_lstnew((char *)"aa");

	ft_lstadd_front(&front, middle);
	ft_lstadd_front(&front, end);

	i = ft_lstsize(front);
	printf("size = %d\n", i);

	printf("%s\n", front->content);
	printf("%s\n", front->next->content);
	printf("%s\n", front->next->next->content);
}
