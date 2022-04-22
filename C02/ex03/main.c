#include <stdio.h>

int     ft_str_is_numeric(char *str);

int	main(void)
{
	char	str[] = "15f9";
	int	i;

	i = ft_str_is_numeric(str);
	printf("%d\n", i);
}
