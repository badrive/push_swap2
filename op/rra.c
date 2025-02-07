/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:56:32 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/07 09:37:44 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rra(t_list **a, int print)
{
    t_list  *last;
    t_list  *second_to_last;

    if (ft_stacklen(*a) >= 2)
    {
        last = *a;

        second_to_last = NULL;

        while (last->next)
        {
            second_to_last = last;
            last = last->next;
        }
        second_to_last->next = NULL;
        last->next = *a;
        *a = last;
        if (print)
            ft_printf("rra\n");
    }
}
//zone 13370lions alx
