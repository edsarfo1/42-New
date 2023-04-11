/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esarfo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:28:00 by esarfo            #+#    #+#             */
/*   Updated: 2023/03/05 17:28:10 by esarfo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	while (b <= y)
	{	
		while (a <= x)
		{
			if ((a == 1 && b == 1) || (a == x && b == 1)
				|| (a == 1 && b == y) || (a == x && b == y))
				ft_putchar('o');
			else if ((1 < a) && (a < x) && (b == 1 || b == y))
				ft_putchar('-');
			else if ((a == 1 || a == x) && (1 < b) && (b < y))
				ft_putchar('|');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		a = 1;
		b++;
	}
}
