/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:59:37 by genouf            #+#    #+#             */
/*   Updated: 2022/04/27 15:42:20 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

void	ft_putnbr(int n)
{
	long	i;

	i = n;
	if (i < 0)
	{
		ft_putchar('-');
		i = -i;
	}
	if (i > 9)
		ft_putnbr(i / 10);
	ft_putchar('0' + (i % 10));
}

void	ft_putaddr(unsigned long long addr)
{
	int		i;
	char 	buff[12];

	i = 0;
	while (i < 12)
	{
		if (addr % 16 >= 10)
			buff[i] = 'a' + addr % 16 % 10;
		else
			buff[i] = '0' + addr % 16;
		i++;
		addr /= 16;
	}
	i = 12;
	write(1, "0x", 2);
	while (--i > -1)
		ft_putchar(buff[i]);
}