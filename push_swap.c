/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:43:12 by bfaras            #+#    #+#             */
/*   Updated: 2025/01/25 10:49:34 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void process_digit(char **digit, t_list **stack_a)
{
    int value;
    int i = 0;
    int j;

    while (digit[i] != NULL)
    {
        j = 0;
        while (digit[i][j] != '\0')
        {
            if (!(digit[i][j] >= '0' && digit[i][j] <= '9') && !(j == 0 && (digit[i][j] == '-')))
            {
                ft_printf("Error: Invalid digit '%s'\n", digit[i]);
                exit(1);
            }
            j++;
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

void    sa(t_list *lst)
{
    // if (lst == NULL) // Check if the list is empty
    // {
    //     ft_printf("The list is empty.\n");
    //     return;
    // }
    ft_printf("first -> %d\n", lst->content);
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
    ft_printf("stack_a :\n");
    print_list(stack_a);
    ft_printf("stack_b :\n");
    print_list(stack_b);

    sa(stack_a); // Print the first node of stack_a

    ft_lstclear(&stack_a); // Clear stack_a
    ft_lstclear(&stack_b); 
    }
    return (0);
}
