/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkin <kjurkin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:32:29 by kjurkin           #+#    #+#             */
/*   Updated: 2025/03/13 20:06:23 by kjurkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_hex(char c, int n, int fd)
// {
// 	int	count;

// 	count = 0;
// 	if (n < 10)
// 		ft_putchar_int(n + '0', fd);
// 	else if (n < 16 && c == 'x')
// 		ft_putchar_int(n + 'a' - 10, fd);
// 	else if (n < 16 && c == 'X')
// 		ft_putchar_int(n + 'A' - 10, fd);
// 	else
// 	{
// 		count += ft_putnbr_hex(c, n / 16, fd);
// 		if (n % 16 < 10)
// 			count += ft_putchar_int((n % 16) + '0', fd);
// 		else if (c == 'x')
// 			count += ft_putchar_int((n % 16) + 'a' - 10, fd);
// 		else
// 			count += ft_putchar_int((n % 16) + 'A' - 10, fd);
// 	}
// 	return (count);
// }
{
	unsigned int	output;
	int	count;

	output = (unsigned int) n;
	output = reverse(output, 16);
	count = 0;
	while (output)
	{
		if (output % 16 < 10)
			ft_putchar_int((output % 16) + '0', fd);
		else if (c == 'x')
			ft_putchar_int((output % 16) + 'a' - 10, fd);
		else
			ft_putchar_int((output % 16) + 'A' - 10, fd);
		output /= 16;
		count++;
	}
	return (count);
}
