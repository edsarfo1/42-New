/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboki-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:17:03 by kaboki-p          #+#    #+#             */
/*   Updated: 2023/03/19 22:59:23 by mprunty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs/headers.h"
#include "libs/ft_putchar.h"
#include "libs/ft_strstr.h"
#include "libs/ft_strlen.h"
#include "libs/ft_atoi.h"
#include "libs/helpers.h"


char*	get_num(char *buff, int num , char *n)
{
	if (num <= 20)
		return ft_strstr(buff, n);
	else if (num % 10 == 0 && num <= 100)
		return ft_strstr(buff, n);
	else if (num % 10 != 0 && num <= 100)
}
void    setup(char *buff, char *n)
{
        int     len;
        int     num;
        char    *str;

        len = ft_strlen(n);
	num = ft_atoi(n);
	print(get_num(buff, num, n));
}


int	main(int ac, char **av)
{
        char    *n;
        int     fd;
        char    *buff;
        char    *dict;

        dict = "data/numbers.dict";
        if (ac == 2)
                n = av[1];
        else if (ac == 3)
        {
                dict = av[1];
                n = av[2];
        }
        else
        {
                print("Incorrect arg count");
                return (0);
        }
        fd = open(dict, O_RDONLY);
        buff = (char*)malloc(512);
        read(fd, buff, 512);
        setup(buff, n );
        return (0);
}

