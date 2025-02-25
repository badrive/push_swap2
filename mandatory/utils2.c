/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 15:08:40 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/25 13:05:19 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	stack_max(t_list **lst)
{
	t_list	*current;
	int		max;

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

int	stack_min(t_list **lst)
{
	t_list	*current;
	int		min;

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

void	stack_index(t_list **a)
{
	t_list	*current;
	t_list	*next;

	current = *a;
	while (current)
	{
		current->index = 0;
		next = *a;
		while (next)
		{
			if (current->content > next->content)
				current->index++;
			next = next->next;
		}
		current = current->next;
	}
}

int	has_duplicates(t_list *stack)
{
	t_list	*current;
	t_list	*check;

	current = stack;
	while (current)
	{
		check = current->next;
		while (check)
		{
			if (current->content == check->content)
				return (1);
			check = check->next;
		}
		current = current->next;
	}
	return (0);
}

void	error_exit(char *message, t_list **stack_a)
{
	ft_printf("Error: %s\n", message);
	ft_lstclear(stack_a);
	exit(1);
}
