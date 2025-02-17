/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:42:00 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/17 19:53:01 by bfaras           ###   ########.fr       */
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
