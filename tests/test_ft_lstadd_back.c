#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"


// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*last;

// 	last = ft_lstlast(*lst);
// 	last->next = new;
// }

void test_ft_lstadd_back(void)
{
	t_list	*front;
	t_list	*middle;
	t_list	*end;
	t_list	*added;

	front = ft_lstnew((char *)"cc");
	middle = ft_lstnew((char *)"bb"); 
	end = ft_lstnew((char *)"aa");
	added = ft_lstnew((char *)"dd");

	ft_lstadd_front(&front, middle);
	ft_lstadd_front(&front, end);

	ft_lstadd_back(&front, added);

	printf("%s\n", ft_lstlast(front)->content);
	printf("%s\n", front->content);
	printf("%s\n", front->next->content);
	printf("%s\n", front->next->next->content);
	printf("%s\n", front->next->next->next->content);
}
