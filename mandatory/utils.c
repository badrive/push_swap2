/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:42:00 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/21 09:26:27 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    ft_free(char **digit)
{
    int     i;
    
    i = 0;
    while (digit[i])
    {
        free(digit[i]);
        i++;
    }
    free(digit);
}


void     process_arguments(int ac, char **av, t_list **stack_a)
{
    char **digit;
    int i = 1;

    while (i < ac)
    {
        digit = ft_split(av[i], ' ');
        if (digit)
            process_digit(digit, stack_a);
        i++;
    }
}

void    process_digit(char **digit, t_list **stack_a)
{
    int value;
    int i = 0;

    while (digit[i] != NULL)
    {
        if (!ft_isdigit(digit[i]))
        {
            ft_printf("Error: Invalid digit '%s'\n", digit[i]);
            int j = 0;
            while (digit[j])
            {
                free(digit[j]);
                j++;
            }
            free(digit);
            ft_lstclear(stack_a);
            exit(1);
        }
        value = ft_atoi(digit[i]);
        ft_lstadd_back(stack_a, ft_lstnew(value));
        i++;
    }
    ft_free(digit);
}

void    print_list(t_list *lst)
{
    while (lst)
    {
        ft_printf("->%d[%d]\n", lst->content, lst->index);
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
