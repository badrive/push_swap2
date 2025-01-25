/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:44:34 by bfaras            #+#    #+#             */
/*   Updated: 2025/01/25 18:55:51 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    pb(t_list **a, t_list **b, int print)
{
    t_list  *new_node;
    t_list  *temp;

    if (ft_stacklen(*a) > 0)
    {
        new_node = ft_lstnew((*a)->content);
        if (!new_node)
            return;

        ft_lstadd_front(b, new_node);

        temp = *a;
        *a = (*a)->next;
        free(temp);

        if (print)
            ft_printf("pb\n");
    }
}