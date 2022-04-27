/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:44:39 by genouf            #+#    #+#             */
/*   Updated: 2022/04/27 15:42:25 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdio.h>

/* INCLUDE */
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

/* PROTOTYPES */
int		ft_printf(const char *, ...);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(int n);
void	ft_putaddr(unsigned long long addr);

#endif