/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 20:58:33 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/20 21:01:56 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

void    ft_free(char **digit);
void    process_digit(char **digit, t_list **stack_a);
void    print_list(t_list *lst);
int     ft_stacklen(t_list *stack);
int     stack_max(t_list **lst);
int     stack_min(t_list **lst);
void    stack_index(t_list **a);
void     process_arguments(int ac, char **av, t_list **stack_a);

void    sa(t_list *lst, int print);
void    sb(t_list *lst, int print);
void    ss(t_list *a, t_list *b, int print);
void    pa(t_list **a, t_list **b, int print);
void    pb(t_list **a, t_list **b, int print);
void    ra(t_list **a, int print);
void    rb(t_list **b, int print);
void    rr(t_list **a, t_list **b, int print);
void    rra(t_list **a, int print);
void    rrb(t_list **b, int print);
void    rrr(t_list **a, t_list **b, int print);

// void    sort2(t_list **lst);
void    sort3(t_list **lst);
// void    sort4(t_list **a, t_list **b);
void    sort5(t_list **a, t_list **b);
void    sort(t_list **a, t_list **b, int range);

#endif
