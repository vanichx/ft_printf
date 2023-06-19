/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 11:33:23 by ipetruni          #+#    #+#             */
/*   Updated: 2023/06/07 14:26:30 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HL "0123456789abcdef"
# define HU "0123456789ABCDEF"

# include <stdlib.h>//for malloc and free functions.
# include <unistd.h>//for file I/O (read, write, open, close). Also for size_t.
# include <stdarg.h>//for va_list structures.
//Main function
int	ft_printf(const char *format, ...);
//For '%c'
int	ft_putchar(char c);
//For '%s'
int	ft_putstr(char *s);
//For '%p'
int	ft_putptr(unsigned long long n);
//For '%d'
int	ft_putnbr(int n);
//For '%i'
int	ft_putnbr(int n);
//For '%u'
int	ft_putunbr(unsigned int n);
//For '%x'
int	ft_puthexlow(unsigned long long n);
//For '%X'
int	ft_puthexupp(unsigned long long n);

#endif