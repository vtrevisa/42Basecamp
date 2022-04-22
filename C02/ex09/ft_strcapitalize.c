/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 03:41:54 by vtrevisa          #+#    #+#             */
/*   Updated: 2022/04/20 22:59:58 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	variables(int i, int u, char *str)
{
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (u == 0)
				str[i] = str[i] - 32;
			u = 1;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (u == 1)
				str[i] = str[i] + 32;
			u = 1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			u = 1;
		else
			u = 0;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	u;

	i = 0;
	u = 0;
	variables(i, u, str);
	return (str);
}
