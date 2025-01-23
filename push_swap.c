/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:43:12 by bfaras            #+#    #+#             */
/*   Updated: 2025/01/23 20:44:58 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void process_digit(char **digit, t_list *stack_a)
{
    // int     i;
    // i = 0;

    // while (/* condition */)
    // {
    //     /* code */
    // }
    
    if (!ft_isdigit(*digit))
        ft_printf("error");
    int value = ft_atoi(*digit);
    ft_lstadd_back(&stack_a,ft_lstnew(value));
}

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
            process_digit(digit, stack_a);
            i++;
        }
    }
}
