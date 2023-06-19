/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:08:38 by ipetruni          #+#    #+#             */
/*   Updated: 2023/06/08 13:36:08 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	result;

	result = 0;
	if (n == -2147483648)
	{
		result += ft_putchar('-');
		result += ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		result += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		result += ft_putnbr(n / 10);
	result += ft_putchar(n % 10 + 48);
	return (result);
}
