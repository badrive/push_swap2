/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:43:12 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/25 20:49:30 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		return (0);
	process_arguments(ac, av, &stack_a);
	if (!is_sorted(stack_a))
	{
		stack_index(&stack_a);
		if (ft_stacklen(stack_a) <= 3)
			sort3(&stack_a);
		else if (ft_stacklen(stack_a) <= 5)
			sort5(&stack_a, &stack_b);
		else if (ft_stacklen(stack_a) < 99)
			sort(&stack_a, &stack_b, 3);
		else if (ft_stacklen(stack_a) == 100)
			sort(&stack_a, &stack_b, 15);
		else
			sort(&stack_a, &stack_b, 30);
	}
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}
