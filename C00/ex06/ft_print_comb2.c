/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:10:36 by vtrevisa          #+#    #+#             */
/*   Updated: 2022/04/13 23:08:27 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char d)
{
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	int	numbers1;
	int	numbers2;
	int	add;

	numbers1 = 0;
	add = 1;
	while (numbers1 <= 98)
	{	
		numbers2 = 0 + add;
		while (numbers2 <= 99)
		{	
			ft_putchar(((numbers1 / 10) + '0'), ((numbers1 % 10) + '0'));
			write(1, " ", 1);
			ft_putchar(((numbers2 / 10) + '0'), ((numbers2 % 10) + '0'));
			if (numbers1 != 98 || numbers2 != 99)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			numbers2++;
		}
		add++;
		numbers1++;
	}
}
