/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:27:44 by vtrevisa          #+#    #+#             */
/*   Updated: 2022/04/12 20:30:39 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_if_normal(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_if_normal(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
}

void	ft_if_negmax(int nb)
{	
	if (nb < 0)
	{
		ft_putchar('-');
		nb = (nb + 1111111111) * (-1);
	}
	if (nb >= 10)
	{	
		ft_if_negmax(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		ft_putchar((nb + 1) + '0');
	}	
}

void	ft_putnbr(int nb)
{
	if (nb > -2147483648)
	{
		ft_if_normal(nb);
	}
	if (nb == -2147483648)
	{
		ft_if_negmax(nb);
	}
	ft_putchar('\n');
}
