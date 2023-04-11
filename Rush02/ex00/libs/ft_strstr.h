/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboki-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:04:44 by kaboki-p          #+#    #+#             */
/*   Updated: 2023/03/19 21:47:32 by mprunty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while(str[i] )

	{
		j = 0;
		while (i)
		{
			if (to_find[j] == '\0')
			{
				return (&str[i]);
			}
			if (str[i + j] != to_find[j])
			{
				break;
			}
			++j;
		}
		++i;
	}
	return (0);
}
