/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esarfo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 00:39:26 by esarfo            #+#    #+#             */
/*   Updated: 2023/03/15 03:04:03 by esarfo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*int	main(void)
{

	int a = 1;
	int b = 2;

	int *pa = &a;
	int *pb = &b;
	printf("%d, %d\n", a, b);
	ft_swap(pa, pb);
	printf("%d, %d\n", a, b);
	return(0);
}*/
