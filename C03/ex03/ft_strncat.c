/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esarfo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 01:07:28 by esarfo            #+#    #+#             */
/*   Updated: 2023/03/23 01:33:41 by esarfo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dest[x] != '\0')
		x++;
	while (src[i] != '\0' && nb > 0)
	{
		dest[x] = src[i];
		x++;
		i++;
		nb--;
	}
	dest[x] = '\0';
	return (dest);
}
/*int main(void)
{
	char str1 [20] = "Eddy is the ";
	char str2 [] = "GOAT";
	unsigned int num = 4;

	ft_strncat(str1, str2, num);
	printf("%s\n", str1);
	return (0);
}*/
