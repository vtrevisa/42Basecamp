#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

#define SIZE 10

int	main(void)
{
	int	tab[] = {-3989, 3661, 2305, -108, -829, 296, -954, -1402, -3787, 3890};
	int	i;

	i = 0;
	while(i < SIZE)
	{
		printf("%d, ", tab[i]);
		i++;
	}

	printf("\n");

	ft_sort_int_tab(tab, SIZE);

	i = 0;
	while(i < SIZE)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
