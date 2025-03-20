/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkin <kjurkin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:07:27 by kjurkin           #+#    #+#             */
/*   Updated: 2025/03/20 17:19:04 by kjurkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>
#include <unistd.h>

int	write_arg(va_list args, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar_int(va_arg(args, int), 1);
	if (c == 's')
		count += ft_putstr_int(va_arg(args, char *), 1);
	if (c == 'i' || c == 'd')
		count += ft_putnbr_int(va_arg(args, int), 1);
	if (c == 'u')
		count += ft_putnbr_uns(va_arg(args, int), 1);
	if (c == 'x' || c == 'X')
		count += ft_putnbr_hex(c, va_arg(args, unsigned int), 1);
	if (c == '%')
		write(1, "%", 1);
	if (c == 'p')
		count += ft_putptr_int(va_arg(args, uintptr_t), 1);
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, s);
	i = 0;
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
	return (count - 1);
}
