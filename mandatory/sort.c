/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:04:32 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/09 21:56:07 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sort2(t_list **lst)
{
    if ((*lst)->content > (*lst)->next->content)
        sa(*lst,1);
}

void    sort3(t_list **lst)
{
    int     max;

    max = stack_max(lst);
    if ((*lst)->content == max)
        ra(lst,1);
    if ((*lst)->next->content == max)
        rra(lst,1);
    if ((*lst)->content > (*lst)->next->content)
        sa(*lst,1);
}

void    sort4(t_list **a, t_list **b)
{
    int     max;

    max = stack_max(a);
    pb(a,b,1);
    sort3(a);
    pa(a,b,1);
    if ((*a)->content > (*a)->next->content)
    {
        if ((*a)->content == max)
            ra(a,1);
        else
            sa(*a,1);
    }
}

// find max 

// 4 3 2 1
// 1 2 3 // 4
// 4 1 2 3
// 1 2 3 4