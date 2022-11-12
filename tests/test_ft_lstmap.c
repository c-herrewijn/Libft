#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

static void del_test(void *str)
{
	if (str)
	{
		printf("freeing content: %s\n", (char *)str);
		free(str);
	}
}

static void *f_test(void *str)
{
	char	*c;

	c = (char *)str;
	while (*c)
	{
		*c = toupper(*c);
		c++;
	}
	return (str);
}

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*new_first;
// 	t_list	*i_new_list;
// 	t_list	*temp;

// 	new_first = ft_lstnew(f(lst->content));
// 	if (new_first == NULL)
// 		return (NULL);
// 	i_new_list = new_first;
// 	while (lst->next)
// 	{
// 		temp = ft_lstnew(f(lst->next->content));
// 		if (temp == NULL)
// 		{
// 			ft_lstclear(&new_first, del);
// 			return (NULL);
// 		}
// 		i_new_list->next = temp;
// 		i_new_list = i_new_list->next;
// 		lst = lst->next;
// 	}
// 	return (new_first);
// }

void test_ft_lstmap(void)
{
	t_list	*start;
	t_list	*middle;
	t_list	*end;
	t_list	*new;

	start = ft_lstnew(ft_strdup("aa"));
	middle = ft_lstnew(ft_strdup("bb"));
	end = ft_lstnew(ft_strdup("cc"));
	ft_lstadd_back(&start, middle);
	ft_lstadd_back(&start, end);

	new = ft_lstmap(start, &f_test, &del_test);
	printf("new: %s\n", (char *)(new->content));
	printf("new: %s\n", (char *)(new->next->content));
	printf("new: %s\n", (char *)(new->next->next->content));
}
