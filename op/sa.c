/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:53:08 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/06 14:24:18 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sa(t_list *lst, int print)
{
    int swap;
    
    swap = lst->content;
    lst->content = lst->next->content;
    lst->next->content = swap;
    if (print)
        ft_printf("sa\n");        
}
// yassin
