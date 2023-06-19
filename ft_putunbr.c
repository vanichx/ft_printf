/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:16:44 by ipetruni          #+#    #+#             */
/*   Updated: 2023/06/08 13:39:13 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int	result;

	result = 0;
	if (n == 4294967295)
	{
		result += ft_putchar('4');
		n = 294967295;
	}
	if (n < 10)
		result += ft_putchar('0' + n);
	if (n >= 10)
	{
		result += ft_putnbr(n / 10);
		result += ft_putnbr(n % 10);
	}
	return (result);
}
