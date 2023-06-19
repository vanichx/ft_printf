/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:22:50 by ipetruni          #+#    #+#             */
/*   Updated: 2023/06/08 14:14:57 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long n)
{
	int	result;

	result = 0;
	result += ft_putstr("0x");
	result += ft_puthexlow(n);
	return (result);
}
