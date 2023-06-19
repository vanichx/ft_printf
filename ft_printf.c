/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:27:32 by ipetruni          #+#    #+#             */
/*   Updated: 2023/06/08 16:41:41 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(char c, va_list arg)
{		
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (c == 'p')
		return (ft_putptr(va_arg(arg, unsigned long)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (c == 'u')
		return (ft_putunbr(va_arg(arg, unsigned int)));
	else if (c == 'x')
		return (ft_puthexlow(va_arg(arg, unsigned int)));
	else if (c == 'X')
		return (ft_puthexupp(va_arg(arg, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	argpointer;

	i = 0;
	count = 0;
	va_start(argpointer, format);
	while (format[i])
	{
		if (format[i] == '%')
			count += ft_convert(format[++i], argpointer);
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(argpointer);
	return (count);
}

