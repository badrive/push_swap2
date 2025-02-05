/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 20:58:33 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/05 19:44:31 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

void    process_digit(char **digit, t_list **stack_a);
int     ft_stacklen(t_list *stack);
void    sa(t_list *lst, int print);
void    sb(t_list *lst, int print);
void    ss(t_list *a, t_list *b, int print);
void    pa(t_list **a, t_list **b, int print);
void    pb(t_list **a, t_list **b, int print);
void    ra(t_list *a, int print);
// t_list	*ft_lstnew(int content);
// void	ft_lstadd_back(t_list **lst, t_list *new);

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;

#endif
