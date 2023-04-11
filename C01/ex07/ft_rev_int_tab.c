/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esarfo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:49:00 by esarfo            #+#    #+#             */
/*   Updated: 2023/03/18 20:30:29 by esarfo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tab2;

	i = 0;
	size--;
	while (i < size)
	{
		tab2 = tab[i];
		tab[i] = tab[size];
		tab[size] = tab2;
		i++;
		size--;
	}
}

/*int	main()
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = 0;

	while (tab[size] != '\0')
	{
        size++;
   	}

	int i = 0;
	while (i < size)
	{
	printf("%d ", tab[i]);
	i++;
	}
	ft_rev_int_tab(tab, size);
	printf("\n");
	i = 0;
	while (i < size)
	{
	printf("%d ", tab[i]);
	i++;
	}
	return 0;
}*/
