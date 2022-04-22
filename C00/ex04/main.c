void	ft_putchar(char c);
void	ft_is_negative(int n);

int	main(void)
{
	int	n;

	n = -5;
	ft_is_negative(n);
	n = 5;
	ft_is_negative(n);
	n = 0;
	ft_is_negative(n);
}
