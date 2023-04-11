/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprunty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 22:37:44 by mprunty           #+#    #+#             */
/*   Updated: 2023/03/19 23:08:00 by esarfo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "headers.h"

int	mp_pow(int x, int n)
{
	if (n > 1)
		return (mp_pow(x, --n) * x);
}

int	ch_is_upper(char *ch)
{
	if (*ch >= 65 && *ch <= 90)
		return (1);
	return (0);
}

int	ch_is_lower(char *ch)
{
	if (*ch >= 97 && *ch <= 122)
		return (1);
	return (0);
}

void	print(char *ch)
{
	if (*ch != '\n' )
	{
		if (ch_is_lower(ch) || ch_is_upper(ch))
			write (1, ch, 1);
		print(++ch);
	}
	return ;
}
