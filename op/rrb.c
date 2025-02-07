/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:40:12 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/07 09:40:45 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rrb(t_list **b, int print)
{
    t_list  *last;
    t_list  *second_to_last;

    if (ft_stacklen(*b) >= 2)
    {
        last = *b;

        second_to_last = NULL;

        while (last->next)
        {
            second_to_last = last;
            last = last->next;
        }
        second_to_last->next = NULL;
        last->next = *b;
        *b = last;
        if (print)
            ft_printf("rrb\n");
    }
}
//zone 13370lions alx
