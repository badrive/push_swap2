/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:43:12 by bfaras            #+#    #+#             */
/*   Updated: 2025/01/24 18:26:32 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void process_digit(char **digit, t_list **stack_a)
{
    int     value;
    int     i;
    int     j;

    i = 0;
    j = 0;
    //(void *)value;
    while (digit[i] != NULL)
    {
        if (digit[i][0] == '\0')
            i++;
        if (!ft_isdigit(digit[i]))
        {
            ft_printf("error");
             exit(1);
        }
        value = ft_atoi(digit[i]);
        ft_lstadd_back(stack_a, ft_lstnew(value));
        i++;
    }
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
    print_list(stack_a);
    ft_lstclear(&stack_a);
    //ft_printf("nice\n"); // Debug print
    return (0);
}
