/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:48:34 by ipetruni          #+#    #+#             */
/*   Updated: 2023/06/08 13:37:09 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlow(unsigned long long n)
{
	int		result;

	result = 0;
	if (n > 15)
		result += ft_puthexlow(n / 16);
	result += ft_putchar(HL[n % 16]);
	return (result);
}
