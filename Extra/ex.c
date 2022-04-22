#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char **str)
{
	int i;

	i = 0;
	while(str[0][i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_is_repeated(char *new, char	*str, int l)
{
	int	i;
	int p;
	int	f;
	int	n;

	i = 0;
	p = 1;
	f = 0;
	n = 1;
	new[0] = str[0];
	while (p < l)
	{
		i = 0;
		while (i < p)
		{
			if(str[p] == str[i])
			{
				i = p;
				f = 0;
			}
			if (str[p] != str[i])
			{
				i++;
				f = 1;
			}
		}
		if(f == 1)
		{
			new[n] = str[p];
			n++;
			p++;
		}
		else
		{
			p++;
		}
		if(p == l || str[p] == '\0')
		{
			new[p] = '\0';
		}
	}
	new[p] = '\0';
	return(str);
}
int	inter_main(int argc, char **argv)
{
	int	i;
	int n;
	int	m;

	m = 0;
	n = 0;
	i = ft_strlen(argv);
	char c[15000];
	ft_is_repeated(c, argv[0], i);
	if(argc == 2)
	{
		while((c[n] != '\0') && (c[n] >= 33 && c[n] <= 126))
		{
			if (c[n] == argv[1][m])
			{
				m++;
			}
			ft_putchar(c[n]);
			n++;
			m = 0;
		}
		ft_putchar('\n');
	}
	if(argc != 2)
		ft_putchar('\n');
	return(0);
}