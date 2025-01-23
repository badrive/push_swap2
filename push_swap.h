/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 20:58:33 by bfaras            #+#    #+#             */
/*   Updated: 2025/01/23 20:02:52 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

void process_digit(char **digit, t_list *stack_a);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;

#endif