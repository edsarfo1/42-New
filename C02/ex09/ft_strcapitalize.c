/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esarfo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 02:02:57 by esarfo            #+#    #+#             */
/*   Updated: 2023/03/21 04:14:26 by esarfo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	i = 1;
	x = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i])
	{
		if (!((str[x] >= 'A' && str[x] <= 'Z')
				|| (str[x] >= 'a' && str[x] <= 'z')
				|| (str[x] >= '0' && str[x] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		i++;
		x++;
	}
	return (str);
}
/*int main(void)
{
	char str [] = "eddy is the king of 42";
	printf("%s\n", str);
	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
