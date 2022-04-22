#include <stdio.h>

char *ft_strlowcase(char *str);

int	main(void)
{
	char	str[] = "aAbBcC";

	ft_strlowcase(str);
	printf("%s\n", str);
}
