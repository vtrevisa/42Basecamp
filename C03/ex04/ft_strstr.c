/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 19:53:20 by vtrevisa          #+#    #+#             */
/*   Updated: 2022/04/22 20:13:43 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*support(char *str, char *to_find, int i, int i2)
{
	int	adr;

	adr = 0;
	while (str[i2])
	{
		if (to_find[i] == str[i2 + adr])
		{
			adr++;
			i++;
			if (to_find[i] == '\0')
			{
				return (&str[i2]);
			}
		}
		else if (to_find[i] != str[i2 + adr])
		{
			adr = 0;
			i = 0;
			i2++;
		}
	}
	return (NULL);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	if (to_find[0] == '\0')
		return (str);
	return (support(str, to_find, i, i2));
}
