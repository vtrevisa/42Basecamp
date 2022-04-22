#include <stdio.h>

int     ft_str_is_uppercase(char *str);

int	main(void)
{
	char	str[] = "DFGHJ";
	int	i;

	i = ft_str_is_uppercase(str);
	printf("%d\n", i);
}
