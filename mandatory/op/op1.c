/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:59:37 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/08 16:03:36 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	pa(t_list **a, t_list **b, int print)
{
	t_list	*new_node;
	t_list	*temp;

	if (ft_stacklen(*b) > 0)
	{
		new_node = ft_lstnew((*b)->content);
		if (!new_node)
			return ;
		ft_lstadd_front(a, new_node);
		temp = *b;
		*b = (*b)->next;
		free(temp);
		if (print)
			ft_printf("pa\n");
	}
}

void	pb(t_list **a, t_list **b, int print)
{
	t_list	*new_node;
	t_list	*temp;

	if (ft_stacklen(*a) > 0)
	{
		new_node = ft_lstnew((*a)->content);
		if (!new_node)
			return ;
		ft_lstadd_front(b, new_node);
		temp = *a;
		*a = (*a)->next;
		free(temp);
		if (print)
			ft_printf("pb\n");
	}
}

void	ra(t_list **a, int print)
{
	t_list	*last;
	t_list	*first;

	if (ft_stacklen(*a) >= 2)
	{
		last = *a;
		first = *a;
		while (last->next)
			last = last->next;
		*a = first->next;
		first->next = NULL;
		last->next = first;
		if (print)
			ft_printf("ra\n");
	}
}

void	rb(t_list **b, int print)
{
	t_list	*last;
	t_list	*first;

	if (ft_stacklen(*b) >= 2)
	{
		last = *b;
		first = *b;
		while (last->next)
			last = last->next;
		*b = first->next;
		first->next = NULL;
		last->next = first;
		if (print)
			ft_printf("rb\n");
	}
}

void	rr(t_list **a, t_list **b, int print)
{
	ra(a, 0);
	rb(b, 0);
	if (print)
		ft_printf("rr\n");
}
