/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpipiton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:54:34 by dpipiton          #+#    #+#             */
/*   Updated: 2023/03/05 17:36:02 by dpipiton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	l;

	i = 1;
	l = 1;
	while (l <= y)
	{
		while (i <= x)
		{
			if ((i == 1 && l == 1) || (i == 1 && l == y))
				ft_putchar('A');
			else if ((i == x && l == 1) || (i == x && l == y))
				ft_putchar('C');
			else if (((i == 1 || i == x) && (l > 1 && l < y))
				|| ((i > 1 && i < x) && (l == 1 || l == y)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		i = 1;
		l++;
	}
}
