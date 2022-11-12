#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// t_list	*ft_lstlast(t_list *lst)
// {
// 	if (lst == NULL)
// 		return (NULL);
// 	while (lst->next)
// 		lst = lst->next;
// 	return (lst);
// }

void test_ft_lstlast(void)
{
	t_list	*front;
	t_list	*middle;
	t_list	*end;

	front = ft_lstnew((char *)"cc");
	middle = ft_lstnew((char *)"bb");
	end = ft_lstnew((char *)"aa");

	ft_lstadd_front(&front, middle);
	ft_lstadd_front(&front, end);

	printf("%s\n", ft_lstlast(front)->content);
}
