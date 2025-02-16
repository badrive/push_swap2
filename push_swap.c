/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:43:12 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/14 14:52:41 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int ac, char *av[])
{
    t_list  *stack_a;
    t_list  *stack_b;
    char    **digit;
    int     i;
    int     j;
    stack_a = NULL;
    stack_b = NULL;
    i = 1;
    j = 0;
    if (ac > 1)
    {
        while (i < ac)
        {
            digit = ft_split(av[i], ' ');
            if (digit)
                process_digit(digit, &stack_a);
            i++;
        }
        // ft_lstadd_front(&stack_b, ft_lstnew(4));
        // ft_lstadd_front(&stack_b, ft_lstnew(5));
        // sort(&stack_a,&stack_b);
        ft_printf("stack_a :\n");
        print_list(stack_a);
        ft_printf("stack_b :\n");
        print_list(stack_b);
    }
    ft_lstclear(&stack_a);
    ft_lstclear(&stack_b);
    return (0);
}
