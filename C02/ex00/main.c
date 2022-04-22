#include <stdio.h>

char    *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char str[100];
       	char str2[100] = "Copy that, please";
	int	i;

	i = 0;
	
	ft_strcpy(str, str2);
	while(str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
}
