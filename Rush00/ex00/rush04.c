/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgullett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:32:44 by bgullett          #+#    #+#             */
/*   Updated: 2023/03/05 17:32:50 by bgullett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	h;
	int	v;

	h = 1;
	while (h <= y)
	{
		v = 1;
		while (v <= x)
		{
			if ((v == 1 && h == 1) || (v == x && h == y && v != 1 && h != 1))
				ft_putchar('A');
			else if ((v == x && h == 1) || (v == 1 && h == y))
				ft_putchar('C');
			else if ((v > 1 && v < x) && (h > 1 && h < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			v++;
		}
		ft_putchar('\n');
		h++;
	}
}
