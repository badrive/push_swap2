/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:43:12 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/07 21:04:39 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void process_digit(char **digit, t_list **stack_a)
{
    int value;
    int i = 0;

    while (digit[i] != NULL)
    {
        // Validate the string using ft_isdigit
        if (!ft_isdigit(digit[i]))
        {
            ft_printf("Error: Invalid digit '%s'\n", digit[i]);

            // Free the digit array
            int j = 0;
            while (digit[j])
            {
                free(digit[j]);
                j++;
            }
            free(digit);

            // Free the stack_a linked list
            ft_lstclear(stack_a);

            exit(1);
        }

        value = ft_atoi(digit[i]);
        ft_lstadd_back(stack_a, ft_lstnew(value));
        i++;
    }

    // Free the digit array
    i = 0;
    while (digit[i])
    {
        free(digit[i]);
        i++;
    }
    free(digit);
}

void    print_list(t_list *lst)
{
    while (lst)
    {
        ft_printf("->%d\n", lst->content);
        lst = lst->next;
    }
}

int ft_stacklen(t_list *stack)
{
    int len = 0;

    while (stack != NULL)
    {
        len++;
        stack = stack->next;
    }

    return len;
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
            if (digit)
                process_digit(digit, &stack_a);
            i++;
        }
    }

    ft_lstadd_front(&stack_b, ft_lstnew(4));
    ft_lstadd_front(&stack_b, ft_lstnew(5));
    
    //pb(&stack_a,&stack_b,1);
    rrr(&stack_a,&stack_b,1);
    ft_printf("stack_a :\n");
    print_list(stack_a);
    ft_printf("stack_b :\n");
    print_list(stack_b);

    ft_lstclear(&stack_a);
    ft_lstclear(&stack_b);
    return (0);
}
