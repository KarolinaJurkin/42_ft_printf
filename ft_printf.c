/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkin <kjurkin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:07:27 by kjurkin           #+#    #+#             */
/*   Updated: 2025/02/16 14:12:33 by kjurkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

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
		else
			i++;
	}
	return (count);
}

char	*write_arg(char *arg, char c)
{
	if (c == 'c')
		ft_putchar_fd(c, 1);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		plc;
	char	*arg;

	va_start(args, s);
	i = 0;
	plc = ft_count_plc(s);
	arg = va_arg(args, char*);
	while (s[i] != '\0')
	{
		while (s[i] != '%')
		{
		write(1, &s[i], 1);
		i++;
		}
		if (s[i] == '%')
			write_arg(arg, s[i + 1]);
	}
}
