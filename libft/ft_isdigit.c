/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:17:30 by bfaras            #+#    #+#             */
/*   Updated: 2025/01/22 21:05:08 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include "../ft_printf/ft_printf.h"

int	ft_isdigit(char *str)
{
	int		i;
	int		len;
	i = 0;
	len = ft_strlen(str);

	while (i < len)
	{
		if ((str[i] >= 48 && str[i] <= 57))
			i++;
		else
			return (0);		
	}
	return (1);
}
