#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char 	*ft_putin2d(char nargv[6][9], char *argv)
{
	int		pos_nv1;
	int		pos_nv2;
	int		pos_v;

	pos_nv1 = 0;
	pos_nv2 = 1;
	pos_v = 0;
	nargv[0][0] = ' ';

	while (pos_v <= 30)
	{
		while(pos_v < 7)
		{
			nargv[pos_nv1][pos_nv2] = argv[pos_v];
			pos_v += 2;
			pos_nv2++;
			nargv[pos_nv1][pos_nv2] = ' ';
			pos_nv2++;
		}
		pos_nv1 = 5;
		pos_nv2 = 1;
		while (pos_v > 6 && pos_v < 15)
		{
			nargv[5][0] = ' ';
			nargv[pos_nv1][pos_nv2] = argv[pos_v];
			pos_v += 2;
			pos_nv2++;
			nargv[pos_nv1][pos_nv2] = ' ';
			pos_nv2++;
		}
		pos_nv1 = 1;
		pos_nv2 = 0;
		while (pos_v > 14 && pos_v < 23)
		{
			nargv[pos_nv1][pos_nv2] = argv[pos_v];
			pos_v += 2;
			pos_nv1++;
		}
		pos_nv1 = 1;
		pos_nv2 = 8;
		while (pos_v > 22 && pos_v <= 30)
		{
			nargv[pos_nv1][pos_nv2] = argv[pos_v];
			pos_v += 2;
			pos_nv1++;
		}
	}
	pos_nv1 = 1;
	pos_nv2 = 1;
	while(pos_nv1 > 0 && pos_nv1 < 5)
	{
		while(pos_nv2 > 0 && pos_nv2 < 8)
		{
			nargv[pos_nv1][pos_nv2] = ' ';
			pos_nv2++;
		}
		pos_nv2 = 1;
		pos_nv1++;
	}
}


int	main(int argc, char **argv)
{
	char	matrix[6][9];
	int 	lim_l;
	int 	lim_c;

	lim_l = 0;
	lim_c = 0;

	ft_putin2d(matrix, argv[1]);
	
	while (lim_c < 6)
	{
		while (lim_l < 9)
		{
			ft_putchar(matrix[lim_c][lim_l]);
			lim_l++;
		}
		ft_putchar('\n');
		lim_l = 0;
		lim_c++;
	}
}
