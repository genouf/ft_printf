/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:44:39 by genouf            #+#    #+#             */
/*   Updated: 2022/05/03 16:22:36 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* INCLUDE */
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>

/* PROTOTYPES */
int		ft_putchar(char c);
void	ft_putstr(char *s, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putnbr_uns(unsigned int n, int *count);
void	ft_putaddr(unsigned long long addr, int *count);
void	ft_puthex(unsigned long nb, int *count);
void	ft_puthex_maj(unsigned long nb, int *count);
size_t	ft_strlen(const char *s);
int		print_result(char c, va_list args, int *count);
int		ft_printf(char const *s, ...);

#endif