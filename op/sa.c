/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:53:08 by bfaras            #+#    #+#             */
/*   Updated: 2025/01/25 14:03:29 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sa(t_list *lst, int print)
{
    int swap;

    if (ft_stacklen(lst) > 1)
    {
        swap = lst->content;
        lst->content = lst->next->content;
        lst->next->content = swap;
        if (print)
            ft_printf("sa\n");        
    }
}
