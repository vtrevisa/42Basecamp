/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 03:18:29 by vtrevisa          #+#    #+#             */
/*   Updated: 2022/04/11 03:19:45 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	rush(int x, int y);

int	ft_atoi(char *ptr)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while ((ptr[i] != '\0') && (ptr[i] >= '0' && ptr[i] <= '9'))
	{
		r = (r * 10) + (ptr[i] - '0');
		i++;
	}
	return (r);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc >= 3)
	{
		x = ft_atoi(argv[1]);
		y = ft_atoi(argv[2]);
	}
	rush (x, y);
	return (0);
}
