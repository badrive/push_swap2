/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:56:30 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/20 16:37:29 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int    max_pos(t_list *stack)
{
    int     i;
    int     max;

    i = 0;
    max = stack_max(&stack);
    while (stack)
    {
        if (stack->content == max)
            return i;
        i++;
        stack = stack->next;
    }
    return i;
}
void    smart_rotat(t_list **a, t_list **b)
{
    int     mid;
    int     max;
    int     max_poss;

    while (*b)
    {
        // ft_printf("error\n");
        max = stack_max(b);
        while ((*b)->content != max)
        {
            mid = ft_stacklen(*b) / 2;
            max_poss = max_pos(*b);
            if (max_poss <= mid)
                rb(b, 1);
            else
                rrb(b, 1);
        }
        pa(a, b, 1);
    }
}
void    sort(t_list **a, t_list **b, int range)
{
    int     i;
    
    i = 0;

    while (*a)
    {
        if ((*a)->index < i)
        {
            pb(a,b,1);
            rb(b,1);
            i++;
        }
        else if ((*a)->index < (i + range))
        {
            pb(a,b,1);
            i++;
        }
        else
            ra(a,1);
    }
    smart_rotat(a,b);
}
