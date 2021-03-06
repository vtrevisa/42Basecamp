/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:58:33 by vtrevisa          #+#    #+#             */
/*   Updated: 2022/04/18 18:10:08 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	s;

	if (*b != 0)
	{
		s = *a % *b;
		*a = *a / *b;
		*b = s;
	}
	else
	{
		*a = 0;
		*b = 0;
	}
}
