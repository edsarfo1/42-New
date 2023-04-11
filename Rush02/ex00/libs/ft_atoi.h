/* ************************************************************************** */
/*	                                                                       */
/*                                                        :::      ::::::::   */
/*   ft_atoi.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprunty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 03:56:59 by mprunty           #+#    #+#             */
/*   Updated: 2023/03/19 06:00:05 by mprunty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ch_is_num(char *ch)
{
	if (*ch >= 48 && *ch <= 57)
		return (1);
	return (0);
}

int	ch_is_minus(char *ch)
{
	if (*ch == 45)
		return (1);
	return (0);
}

int	*ch_to_i(char *ch, int *num)
{
	if (*num)
		*num *= 10;
	*num += (*ch - 48);
	return (num);
}

int	ch_is_space(char *ch)
{
	if (*ch == 32 || (*ch >= 9 && *ch <= 13))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	num;
	int	eon;
	int	neg;

	num = 0;
	eon = 0;
	neg = 1;
	while (*str)
	{
		if (ch_is_minus(str) && !eon)
			neg *= -1;
		else if (ch_is_num(str))
		{
			eon = 1;
			ch_to_i(str, &num);
		}
		else if ((ch_is_space(str) || *str != 43) && eon)
			return (num * neg);
		str++;
	}
	return (0);
}
