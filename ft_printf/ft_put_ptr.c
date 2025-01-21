/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:39:16 by bfaras            #+#    #+#             */
/*   Updated: 2024/12/01 15:11:58 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_ptr(unsigned long hex)
{
	int	len;

	len = 0;
	if (!hex)
	{
		return (write(1, "(nil)", 5));
	}
	write(1, "0x", 2);
	len += ft_put_hex(hex);
	return (len + 2);
}
