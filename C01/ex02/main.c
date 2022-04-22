#include <unistd.h>
#include <stdio.h>


void    ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	
	a = -5;
	b = 5;
	printf("%d\n", a);
	printf("%d\n", b);
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
	
}
