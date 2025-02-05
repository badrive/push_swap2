/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:43:41 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/05 20:46:30 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rb(t_list *b, int print)
{
    t_list  *new_node;
    int  swap;

    if (ft_stacklen(b) >= 2)
    {
        new_node = ft_lstnew((b)->content);
        if (!new_node)
            return;
        swap = b->content;
        while (b->next != NULL)
        {
            b->content = b->next->content;
            b = b->next;
        }
        b->content = swap;
        if (print)
            ft_printf("rb\n");
    }
}
