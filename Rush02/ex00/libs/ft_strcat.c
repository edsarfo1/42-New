/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprunty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 23:51:29 by mprunty           #+#    #+#             */
/*   Updated: 2023/03/19 23:14:13 by esarfo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strcat_rec(char *dest, char *src)
{
	if (*dest)
		(return ft_strcat_rec(++dest, src));
	else if (*src)
	{
		*dest = *src;
		(return ft_strcat_rec(++dest, ++src));
	}
	*dest = '\0';
}

char	*ft_strcat(char *dest, char *src)
{
	char	*res;

	res = dest ;
	ft_strcat_rec(dest, src);
	(return) res;
}
