/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:18:11 by bfaras            #+#    #+#             */
/*   Updated: 2025/01/25 18:19:06 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    pa(t_list **a, t_list **b, int print)
{
    t_list  *new_node;
    t_list  *temp;

    if (ft_stacklen(*b) > 0)
    {
        new_node = ft_lstnew((*b)->content);
        if (!new_node)
            return;

        ft_lstadd_front(a, new_node);

        temp = *b;
        *b = (*b)->next;
        free(temp);

        if (print)
            ft_printf("pa\n");
    }
}
