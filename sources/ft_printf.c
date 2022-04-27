/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:52:01 by genouf            #+#    #+#             */
/*   Updated: 2022/04/27 15:57:21 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	print_result(int index, va_list args)
{
	if (index == 1)
		ft_putchar(va_arg(args, int));
	else if (index == 2)
		ft_putstr(va_arg(args, char *));
	else if (index == 3)
		ft_putaddr(va_arg(args, char *));
	else if (index == 4)
		ft_putnbr(va_arg(args, int));
	else if 
}

int find_functions(char c)
{
	if (c == 'c')
		return (1);
	else if (c == 's')
		return (2);
	else if (c == 'p')
		return (3);
	else if (c == 'd')
		return (4);
	else if (c == 'i')
		return (4);
	else if (c == 'u')
		return (6);
	else if (c == 'x')
		return (7);
	else if (c == 'X')
		return (8);
	else if (c == '%')
		return (9);
	else
		return (0);
}

void	ft_parsing(char const *s, ...)
{
	int		i;
	va_list args;
	
	i = 0;
	va_start(args, s);
	while (i < ft_strlen(s))
	{
		if (s[i] == '%')
		{
			if (find_functions(s[i + 1]))
			{
				print_result(find_functions(s[i + 1]), args);
				i += 2;
			}
			else
			{
				if (s[i + 1] == ' ')
					i += 2;
				else
					i++;
			}
		}		
		else
			write(1, &s[i++], 1);
	}
	va_end(args);
}

int	main(void)
{
	char 	c;
	char	str[] = "Orelsan";

	c = 'G';
	ft_parsing("%c : aime%s", c, str);
	return (0);
}