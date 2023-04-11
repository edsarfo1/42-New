/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esarfo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 05:13:17 by esarfo            #+#    #+#             */
/*   Updated: 2023/03/23 19:47:26 by esarfo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		x = 0;
		while (str[i + x] == to_find[x])
		{
			if (to_find[x + 1] == '\0')
				return (&str[i]);
			x++;
		}
		i++;
	}
	return (0);
}
/*int main(void)
{
	char a[] = {"NewYorkParisTokyoEddyLondon"};
	char b[] = {"Eddy"};
	char *c;

	c = ft_strstr(a, b);

	printf("%s", c);
	return (0);
}*/
