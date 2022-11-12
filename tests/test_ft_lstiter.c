#include <stdio.h>
#include <ctype.h>
#include <string.h>

# include "../libft.h"

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;

void test_func(void *c)
{
	printf("func output: %s\n", (char *)c);
}

void test_ft_lstiter(void)
{
	t_list	*front;
	t_list	*middle;
	t_list	*end;

	front = ft_lstnew((char *)"aa");
	middle = ft_lstnew((char *)"bb"); 
	end = ft_lstnew((char *)"cc");

	ft_lstadd_back(&front, middle);
	ft_lstadd_back(&front, end);

	ft_lstiter(front, test_func);	
}
