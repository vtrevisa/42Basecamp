#include <stdio.h>

int     ft_str_is_lowercase(char *str);

int	main(void)
{
	char	str[] = "adfgh";
	int	i;

	i = ft_str_is_lowercase(str);
	printf("%d\n", i);
}
