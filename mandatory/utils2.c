/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 15:08:40 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/15 17:40:10 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int    stack_max(t_list **lst)
{
    t_list *current;
    int max;
        
    current = *lst;
    max = current->content;
    
    while (current)
    {
        if (current->content > max)
            max = current->content;
        current = current->next;
    }
    return (max);
}

int    stack_min(t_list **lst)
{
    t_list *current;
    int min;

    current = *lst;
    min = current->content;

    while (current)
    {
        if (current->content < min)
            min = current->content;
        current = current->next;
    }
    return (min);
}

void stack_index(t_list **a)
{
    t_list *current;
    int     index;

    current = *a;
    index = 0;
    while (current)
    {
        t_list *next = current->next;
        
        if (next && current->content > next->content)
        {
            current->index = index++;
        }
        else
        {
            current->index = 0;
            while (next && current->content < next->content)
                next = next->next;
            if (next && current->content > next->content)
                current->index = index++;
        }
        
        current = current->next;
    }
}
 