/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:04:32 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/10 18:42:03 by bfaras           ###   ########.fr       */
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
    int     min;

    min = stack_min(a);
    while ((*a)->content != min && (*a)->next->content != min)
        rra(a, 1);
    while ((*a)->content != min)
        ra(a, 1);
    pb(a, b, 1);
    sort3(a);
    pa(a, b, 1);
}

void    sort5(t_list **a, t_list **b)
{
    int     min;

    min = stack_min(a);
    while ((*a)->content != min && (*a)->next->content != min)
        rra(a, 1);
    while ((*a)->content != min)
        ra(a, 1);
    pb(a, b, 1);
    sort4(a,b);
    pa(a, b, 1);
}
