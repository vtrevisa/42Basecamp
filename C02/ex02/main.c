#include <stdio.h>

int     ft_str_is_alpha(char *str);

int	main(void)
{
	char	str[] = "7aBcDe7";
	int	i;

	i = ft_str_is_alpha(str);
	printf("%d\n", i);
	
}
