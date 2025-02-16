/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:56:30 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/14 16:22:21 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sort(t_list **a, t_list **b)
{
    int     min;
    // int     *arr;

    min = stack_min(a);
    while (*a)
    {
        if ((*a)->content == min)
        {
            pb(a, b, 1);
            if (!*a)
                break;
            min = stack_min(a);
        }
        else
            ra(a, 1);
    }

    while (*b)
        pa(a, b, 1);
}
