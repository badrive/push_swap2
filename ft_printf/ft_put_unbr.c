/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:57:49 by bfaras            #+#    #+#             */
/*   Updated: 2024/11/29 13:58:45 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unbr(unsigned int num)
{
	int	len;

	len = 0;
	if (num >= 10)
	{
		len += ft_put_unbr(num / 10);
	}
	num = num % 10 + 48;
	len += write(1, &num, 1);
	return (len);
}
