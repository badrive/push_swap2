/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 12:33:13 by bfaras            #+#    #+#             */
/*   Updated: 2025/01/25 14:04:08 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sb(t_list *lst, int print)
{
    int swap;

    if (ft_stacklen(lst) > 1)
    {
        swap = lst->content;
        lst->content = lst->next->content;
        lst->next->content = swap;
        if (print)
            ft_printf("sb\n");    
    }
}
