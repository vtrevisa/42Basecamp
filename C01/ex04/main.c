#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	
	a = 1026;
	b = 512;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d\n", a, b);
	a = -1026;
    b = 512;
        ft_ultimate_div_mod(&a, &b);
        printf("%d %d\n", a, b);
	a = -100;
    b = -2;
        ft_ultimate_div_mod(&a, &b);
        printf("%d %d\n", a, b);
	a = 1026;
    b = 0;
        ft_ultimate_div_mod(&a, &b);
        printf("%d %d\n", a, b);
	return(0);
}
