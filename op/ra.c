/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:35:46 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/05 20:00:13 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    ra(t_list *a, int print)
{
    t_list  *new_node;
    int  swap;

    if (ft_stacklen(a) >= 2)
    {
        new_node = ft_lstnew((a)->content);
        if (!new_node)
            return;
        swap = a->content;
        while (a->next != NULL)
        {
            a->content = a->next->content;
            a = a->next;
        }
        a->content = swap;
        if (print)
            ft_printf("ra\n");
    }
}
