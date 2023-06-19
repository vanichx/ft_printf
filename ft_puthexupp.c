/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:48:55 by ipetruni          #+#    #+#             */
/*   Updated: 2023/06/08 13:36:40 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexupp(unsigned long long n)
{
	int		result;

	result = 0;
	if (n >= 16)
		result += ft_puthexupp(n / 16);
	result += ft_putchar(HU[n % 16]);
	return (result);
}
