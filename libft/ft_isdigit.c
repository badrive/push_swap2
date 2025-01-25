/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:17:30 by bfaras            #+#    #+#             */
/*   Updated: 2025/01/25 11:03:44 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char *str)
{
    int i = 0;

    // Handle optional minus sign
    if (str[i] == '-')
        i++;

    // Check if the remaining characters are digits
    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
            return 0; // Not a digit
        i++;
    }

    // If the string is empty or only contains a minus sign, it's invalid
    if (i == 0 || (i == 1 && str[0] == '-'))
        return 0;

    return 1; // Valid number
}
