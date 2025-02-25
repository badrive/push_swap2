/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaras <bfaras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:48:40 by bfaras            #+#    #+#             */
/*   Updated: 2025/02/25 15:15:03 by bfaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_put_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_put_str("(null)"));
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

static int	elsee(int c)
{
	write(1, "%", 1);
	write(1, &c, 1);
	return (2);
}

static int	ft_format(const char format_char, va_list args)
{
	if (format_char == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	else if (format_char == 's')
		return (ft_put_str(va_arg(args, char *)));
	else
		return (elsee(format_char));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!format)
		return (-1);
	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (va_end(args), -1);
			i++;
			count += ft_format(format[i], args);
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
