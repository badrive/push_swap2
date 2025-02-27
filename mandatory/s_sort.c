/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:04:32 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/25 13:05:38 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort3(t_list **lst)
{
	int	max;

	if (ft_stacklen(*lst) > 2)
	{
		max = stack_max(lst);
		if ((*lst)->content == max)
			ra(lst, 1);
		if ((*lst)->next->content == max)
			rra(lst, 1);
	}
	if ((*lst) && (*lst)->next && (*lst)->content > (*lst)->next->content)
		sa(*lst, 1);
}

void	sort5(t_list **a, t_list **b)
{
	int	min;

	while (ft_stacklen(*a) > 3)
	{
		min = stack_min(a);
		while ((*a)->content != min && (*a)->next->content != min)
			rra(a, 1);
		while ((*a)->content != min)
			ra(a, 1);
		pb(a, b, 1);
	}
	sort3(a);
	while (ft_stacklen(*b) != 0)
		pa(a, b, 1);
}
