/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 15:08:40 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/09 20:12:26 by bfaras           ###   ########.fr       */
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