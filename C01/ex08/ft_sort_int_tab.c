/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:21:59 by vtrevisa          #+#    #+#             */
/*   Updated: 2022/04/19 20:49:18 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	swp;
	int	cmp;
	int	size_rev;

	swp = 0;
	cmp = 0;
	size_rev = 0;
	while (cmp < size)
	{
		while (size_rev < size)
		{
			if (tab[size_rev] > tab[cmp])
			{
				swp = tab[cmp];
				tab[cmp] = tab[size_rev];
				tab[size_rev] = swp;
			}
			size_rev++;
		}
		size_rev = 0;
		cmp++;
	}
}
