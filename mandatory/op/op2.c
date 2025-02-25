/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:02:23 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/25 18:10:09 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rra(t_list **a, int print)
{
	t_list	*last;
	t_list	*second_to_last;

	if (ft_stacklen(*a) >= 2)
	{
		last = *a;
		second_to_last = NULL;
		while (last->next)
		{
			second_to_last = last;
			last = last->next;
		}
		second_to_last->next = NULL;
		last->next = *a;
		*a = last;
		if (print)
			write(1,"rra\n",4);
	}
}

void	rrb(t_list **b, int print)
{
	t_list	*last;
	t_list	*second_to_last;

	if (ft_stacklen(*b) >= 2)
	{
		last = *b;
		second_to_last = NULL;
		while (last->next)
		{
			second_to_last = last;
			last = last->next;
		}
		second_to_last->next = NULL;
		last->next = *b;
		*b = last;
		if (print)
			write(1,"rrb\n",4);
	}
}

void	rrr(t_list **a, t_list **b, int print)
{
	rra(a, 0);
	rrb(b, 0);
	if (print)
		write(1,"rrr\n",4);
}

void	sa(t_list *lst, int print)
{
	int	swap;

	swap = lst->content;
	lst->content = lst->next->content;
	lst->next->content = swap;
	if (print)
		write(1,"sa\n",3);
}

void	sb(t_list *lst, int print)
{
	int	swap;

	if (ft_stacklen(lst) > 1)
	{
		swap = lst->content;
		lst->content = lst->next->content;
		lst->next->content = swap;
		if (print)
			write(1,"sb\n",3);
	}
}
