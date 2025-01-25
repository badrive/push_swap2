/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:18:11 by bfaras            #+#    #+#             */
/*   Updated: 2025/01/25 17:55:06 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    pa(t_list **a, t_list **b, int print)
{
    if (ft_stacklen(*b) > 0)  // Check if stack b is not empty
    {
        t_list *new_node = ft_lstnew((*b)->content);  // Create a new node with the content of the top of stack b
        if (!new_node)
            return;  // Handle memory allocation failure if necessary

        ft_lstadd_front(a, new_node);  // Add the new node to the end of stack a

        // Remove the top element from stack b
        t_list *temp = *b;
        *b = (*b)->next;
        free(temp);

        if (print)
            ft_printf("pa\n");
    }
}
