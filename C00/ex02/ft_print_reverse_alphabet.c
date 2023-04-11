/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esarfo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:14:43 by esarfo            #+#    #+#             */
/*   Updated: 2023/03/12 16:41:10 by esarfo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)

/*int	main(void)*/
{
	char	ch;

	ch = 'z';
	while (ch >= 'a')
	{
		write (1, &ch, 1);
		ch--;
	}
}
