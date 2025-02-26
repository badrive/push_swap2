/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:18:59 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/26 18:15:10 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "libft.h"

int	ft_atoi(const char *str, t_list **stack_a, char **digit)
{
	long	result;

	int (one), (j), (nb);
	one = 1;
	result = 0;
	nb = 0;
	j = 0;
	while ((str[j] >= 9 && str[j] <= 13) || (str[j] == 32))
		j++;
	if (str[j] == '-')
		one *= -1;
	if (str[j] == '+' || str[j] == '-')
		j++;
	while (str[j] >= '0' && str[j] <= '9')
	{
		nb = (str[j++] - 48);
		result = result * 10 + nb;
	}
	if ((result * one) > INT_MAX || (result * one) < INT_MIN)
	{
		ft_free(digit);
		error_exit(stack_a);
	}
	return (result * one);
}
