/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkin <kjurkin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:29:04 by kjurkin           #+#    #+#             */
/*   Updated: 2025/03/08 17:12:51 by kjurkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libftprintf.h"

int	ft_putnbr_int(int n, int fd)
{
	int	output;
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		ft_putchar_int('-', fd);
		n *= -1;
		count++;
	}
	output = reverse(n, 10);
	while (output)
	{
		ft_putchar_int((output % 10) + '0', fd);
		output /= 10;
		count++;
	}
	return (count);
}
