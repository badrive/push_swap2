/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:42:00 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/24 19:51:13 by bfaras           ###   ########.fr       */
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
        if (!av[i] || av[i][0] == '\0')
            error_exit("Empty argument", stack_a);
        digit = ft_split(av[i], ' ');
        if (digit)
            process_digit(digit, stack_a);
        else
            error_exit("Memory allocation failed", stack_a);
        i++;
    }

    if (has_duplicates(*stack_a))
        error_exit("Duplicate numbers not allowed", stack_a);
}

static int is_valid_number(char *str)
{
    int i = 0;
    
    if (!str || !*str)
        return (0);
    if (str[0] == '-' || str[0] == '+')
        i++;
    if (!str[i])
        return (0);
    while (str[i])
    {
        if (!ft_isdigit(&str[i]))
            return (0);
        i++;
    }
    return (str[i] == '\0' && i > 0);
}

void    process_digit(char **digit, t_list **stack_a)
{
    int value;
    int i = 0;

    while (digit[i] != NULL)
    {
        if (!is_valid_number(digit[i]))
            error_exit("Invalid digit", stack_a);
        value = ft_atoi(digit[i]);
        ft_lstadd_back(stack_a, ft_lstnew(value));
        i++;
    }
    ft_free(digit);
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
