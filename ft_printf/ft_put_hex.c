/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:45:30 by bfaras            #+#    #+#             */
/*   Updated: 2024/12/01 16:28:44 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(unsigned long num)
{
	const char	*hex;
	int			len;

	hex = "0123456789abcdef";
	len = 0;
	if (num >= 16)
		len += ft_put_hex(num / 16);
	write(1, &hex[num % 16], 1);
	return (len + 1);
}

int	ft_put_hex2(unsigned long num)
{
	const char	*hex;
	int			len;

	hex = "0123456789ABCDEF";
	len = 0;
	if (num >= 16)
		len += ft_put_hex2(num / 16);
	write(1, &hex[num % 16], 1);
	return (len + 1);
}
