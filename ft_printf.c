/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkin <kjurkin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:07:27 by kjurkin           #+#    #+#             */
/*   Updated: 2025/02/22 18:40:12 by kjurkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>

int	ft_count_plc(const char *s)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%' && (s[i + 1] == 'c' || s[i + 1] == 's'))
			count++;
		else if (s[i] == '%' && (s[i + 1] == 'p' || s[i + 1] == 'X'))
			count++;
		else if (s[i] == '%' && (s[i + 1] == 'd' || s[i + 1] == 'i'))
			count++;
		else if (s[i] == '%' && (s[i + 1] == 'u' || s[i + 1] == 'x'))
			count++;
		else if (s[i] == '%' && s[i + 1] == '%')
		{
			count++;
			i += 2;
		}
		i++;
	}
	return (count);
}

int	write_arg(va_list args, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar_int(va_arg(args, int), 1);
	if (c == 's')
		count += ft_putstr_int(va_arg(args, char*), 1);
	if (c == 'i')
		count += ft_putnbr_int(va_arg(args, int), 1);
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	// int		plc;
	int		count;
	
	va_start(args, s);
	i = 0;
	// plc = ft_count_plc(s);
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			count += write_arg(args, s[i]);
		}
		else
			write(1, &s[i], 1);
		i++;
		count++;
	}
	va_end(args);
	printf("\ncount: %d\n", count);
	return(count - 1);
}
