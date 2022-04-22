/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:50:10 by vtrevisa          #+#    #+#             */
/*   Updated: 2022/04/18 18:52:42 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	ptr;
	int	size_rev;
	int	size_norm;

	ptr = 0;
	size_rev = 0;
	size_norm = size - 1;
	while (size_rev < (size / 2))
	{
		ptr = tab [size_norm];
		tab[size_norm] = tab[size_rev];
		tab[size_rev] = ptr;
		size_rev++;
		size_norm--;
	}
}
