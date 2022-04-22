#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	str[] = "adfghjk";
	int	i;

	i = ft_str_is_printable(str);
	printf("%d\n", i);
}
