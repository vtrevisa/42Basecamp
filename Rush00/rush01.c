/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 19:33:23 by vtrevisa          #+#    #+#             */
/*   Updated: 2022/04/10 19:46:09 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{	
	int	line;
	int	column;

	line = y;
	column = x;
	while (line > 0)
	{
		while (column > 0)
		{
			if ((line == y && column == x)
				|| (line == 1 && column == 1 && x != 1 && line != y))
				ft_putchar('/');
			else if ((line == y && column == 1) || (line == 1 && column == x))
				ft_putchar('\\');
			else if ((line != y && line != 1) && (column != x && column != 1))
				ft_putchar(' ');
			else
				ft_putchar('*');
			column--;
		}
		line--;
		column = x;
		ft_putchar('\n');
	}
}
