/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esarfo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:49:32 by esarfo            #+#    #+#             */
/*   Updated: 2023/03/23 01:05:58 by esarfo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dest[x] != '\0')
		x++;
	while (src[i] != '\0')
	{
		dest[x] = src[i];
		x++;
		i++;
	}
	dest[x] = '\0';
	return (dest);
}
/*int main(void)
{
	char str1[20] = "Eddy ";
	char str2[] = "is the best";

	ft_strcat(str1, str2);
	printf("%s\n", str1);
	return (0);
}*/
