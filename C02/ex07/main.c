#include <stdio.h>

char *ft_strupcase(char *str);

int	main(void)
{
	char	str[] = "aAbBcC";

	ft_strupcase(str);
	printf("%s\n", str);
}
