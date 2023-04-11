/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboki-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:12:44 by kaboki-p          #+#    #+#             */
/*   Updated: 2023/03/19 18:57:25 by mprunty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	STR_LENGTH
#define	STR_LENGTH

int	ft_strlen(const char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}
#endif
