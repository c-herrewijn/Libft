#include <limits.h>
#include <stddef.h>
#include <stdio.h>
# include "../libft.h"

void test_ft_printf(void)
{	
	char c1 = 'a';
	char str1[] = "hello";
	char *str;
	int num = 134;
	int return_val;

	return_val = printf("start: %% char %c, int %d, string %s", c1, num, str1);
	printf("; return val %d\n", return_val);
	return_val = ft_printf("start: %% char %c, int %d, string %s", c1, num, str1);
	printf("; return val %d\n", return_val);

	// max values
	return_val = printf("d value %d", (int)2147483648);
	printf("; return val %d\n", return_val);
	return_val = ft_printf("d value %d", (int)2147483648);
	printf("; return val %d\n", return_val);
	return_val = printf("d value %d", (int)21474836482);
	printf("; return val %d\n", return_val);
	return_val = ft_printf("d value %d", (int)21474836482);
	printf("; return val %d\n", return_val);
	return_val = printf("d value %d", (int)-214748364);
	printf("; return val %d\n", return_val);
	return_val = ft_printf("d value %d", (int)-214748364);
	printf("; return val %d\n", return_val);
	return_val = printf("d value %d", (int)-21474836482);
	printf("; return val %d\n", return_val);
	return_val = ft_printf("d value %d", (int)-21474836482);
	printf("; return val %d\n", return_val);

	// print 0-pointer string
	str = NULL;
	return_val = printf("NULL string %s", str);
	printf("; return val %d\n", return_val);
	return_val = ft_printf("NULL string %s", str);
	printf("; return val %d\n", return_val);

	// print regular pointer
	str = "aa";
	return_val = printf("pointer %p", str);
	printf("; return val %d\n", return_val);
	return_val = ft_printf("pointer %p", str);
	printf("; return val %d\n", return_val);
	// print null pointer
	return_val = printf("pointer %p", str);
	printf("; return val %d\n", return_val);
	return_val = ft_printf("pointer %p", str);
	printf("; return val %d\n", return_val);

	// print extreme ponter
	return_val = printf("pointer %p", (void *)(unsigned long long)-1);
	printf("; return val %d\n", return_val);
	return_val = ft_printf("pointer %p", (void *)(unsigned long long)-1);
	printf("; return val %d\n", return_val);

	// print hex
	return_val = printf("hex %X", 256);
	printf("; return val %d\n", return_val);
	return_val = ft_printf("hex %X", 256);
	printf("; return val %d\n", return_val);
	return_val = printf("hex %X", 4294967040U);
	printf("; return val %d\n", return_val);
	return_val = ft_printf("hex %X", 4294967040U);
	printf("; return val %d\n", return_val);

	// hex extreme values
	return_val = printf("hex %X", (unsigned int)LONG_MAX);
	printf("; return val %d\n", return_val);
	return_val = ft_printf("hex %X", (unsigned int)LONG_MAX);
	printf("; return val %d\n", return_val);
	
	// unsigned
	return_val = printf("unsigned %u", 123);
	printf("; return val %d\n", return_val);
	return_val = ft_printf("unsigned %u", 123);
	printf("; return val %d\n", return_val);
	return_val = printf("unsigned %u", -1);
	printf("; return val %d\n", return_val);
	return_val = ft_printf("unsigned %u", -1);
	printf("; return val %d\n", return_val);

	// invalid:
	// return_val = printf("start: %Q");
	// printf("; return val %d\n", return_val);
	// return_val = ft_printf("start: %Q");
	// printf("; return val %d\n", return_val);
}