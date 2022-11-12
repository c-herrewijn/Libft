#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

# include "../libft.h"

void test_print_array(char **arr)
{
	int i = 0;

	if (arr == NULL)
		puts("arr == NULL");
	else
	{
		while (arr[i])
		{
			printf("Word: %s\n", arr[i]);
			i++;
		}
		puts("");
	}
}

void test_ft_split(void)
{
	// char test_str[] = "..aaa..bb..cc.";

	// printf("count words: %zu\n", count_words(test_str, '.'));
	// test_print_array(ft_split(test_str, '.'));
	// printf("test word len: %zu\n", word_len("aaa..a", '.'));
	
	// char str1[] = "ab cd asd"; // ab cd asd
	// char c1 = ' ';
	// test_print_array(ft_split(str1, c1));

	// char str2[] = "  ab cd "; // ab cd
	// char c2 = ' ';
	// test_print_array(ft_split(str2, c2));

	// char str3[] = " .  a_b cd__"; // ' .  a' 'b cd'
	// char c3 = '_';
	// test_print_array(ft_split(str3, c3));
	
	// char str4[] = "aa\200bb"; // aa bb
	// char c4 = '\200';
	// test_print_array(ft_split(str4, c4));
	
	// char str5[] = ""; // '\0'
	// char c5 = 'x';
	// test_print_array(ft_split(str5, c5));

	// char str6[] = "";
	// char c6 = '\0';
	// test_print_array(ft_split(str6, c6));

	// char str7[] = "a b cc ";
	// char c7 = '\0';
	// test_print_array(ft_split(str7, c7));

	char str7[] = "aaaaa";
	char c7 = 'a';
	test_print_array(ft_split(str7, c7));

	// char **test_arr;
	// //test_arr = NULL;
	// test_arr = malloc(16);
	// free_arr(test_arr);
}
