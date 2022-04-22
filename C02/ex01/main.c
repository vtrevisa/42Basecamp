#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char src[] = "abobora";
	char dest[20] = "trator";
	unsigned int	i;

	i = 3;
	printf("%s\n", dest);
		ft_strncpy(dest, src, i);
	printf("%s\n", dest);

	/*while(dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}*/	
}
