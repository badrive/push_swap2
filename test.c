/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:43:12 by bfaras            #+#    #+#             */
/*   Updated: 2025/01/22 21:09:36 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

void    initialize(stack *stack_a)
{
    stack_a->top = -1;
}

size_t    is_full(stack *stack_a)
{
    return (stack_a->top == MAX_SIZE -1);
}

void    push(stack *stack_a, size_t value)
{
    if (is_full(stack_a))
    {
        ft_printf("Stack_overflow\n");
    }
    stack_a->arr[++stack_a->top] = value;
    ft_printf("Pushed %d onto the Stack\n", value);
}

void    print_stack(stack *stack_a)
{
    int     i;
    i = stack_a->top;
    if (stack_a->top == -1)
    {
        ft_printf("Stack is empty\n");
        return;
    }

    ft_printf("Stack contents:\n");
    while (i >= 0)
    {
        ft_printf("[%d] -> %d\n", i , stack_a->arr[i]);
        i--;
    } 
}

void    clear_stack(stack *stack_a)
{
    int     i;
    i = stack_a->top;

    while (i >= 0)
    {
        free(&stack_a->arr[i]);
        ft_printf("[%d] stack are free!\n", i);
        i--;
    }
}

int main (int argc , char *argv[])
{
    stack   stack_a;
    int     value;
    int     i;

    i = 1;
    initialize(&stack_a);
    if (argc == 1)
        return (0);
    while (i < argc)
    {
        if (ft_isdigit(argv[i]) == 1)
        {
            print_stack(&stack_a);
            clear_stack(&stack_a);
            write(1,"Error\n",6);
            exit(1);
        }
        push(&stack_a, ft_atoi(argv[i]));
        i++;
    }
    print_stack(&stack_a);
    return (0);
}
