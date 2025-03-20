/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkin <kjurkin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:00:16 by kjurkin           #+#    #+#             */
/*   Updated: 2025/03/20 17:18:36 by kjurkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdint.h>
#include <unistd.h>

int	ft_putptr_int(uintptr_t n, int fd)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	count += 2;
	if (n < 10)
		ft_putchar_int(n + '0', fd);
	else if (n < 16)
		ft_putchar_int(n + 'a' - 10, fd);
	else
	{
		count += ft_putptr_int(n / 16, fd);
		if (n % 16 < 10)
			count += ft_putchar_int((n % 16) + '0', fd);
		else
			count += ft_putchar_int((n % 16) + 'a' - 10, fd);
	}
	return (count);
}
