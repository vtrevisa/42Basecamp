#include <stdio.h>

#define SIZE 7 

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6, 7};
	int	i;

	i = 0;
	while(i < SIZE)
	{
		printf("%d\n", tab[i]);
		i++;
	}

	ft_rev_int_tab(tab, SIZE);

	i = 0;
	while(i < SIZE)
	{		
		printf("%d\n", tab[i]);
		i++;	
	}	
}
