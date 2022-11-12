#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// void	ft_lstadd_front(t_list **lst, t_list *new)
// {
// 	new->next = *lst;
// 	*lst = new;
// }


void	test_ft_lstadd_front(void)
{
	t_list	*ll1;
	t_list	*ll2;

	ll1 = ft_lstnew((char *)"list 1");
	ll2 = ft_lstnew((char *)"list 2");

	ft_lstadd_front(&ll2, ll1);

	printf("head: %s\n", ll1->content);
	printf("tail: %s\n", ll1->next->content);
}
