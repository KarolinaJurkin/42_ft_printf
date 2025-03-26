/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkin <kjurkin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:29:04 by kjurkin           #+#    #+#             */
/*   Updated: 2025/03/26 17:28:07 by kjurkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libftprintf.h"

int	ft_putnbr_int(int n, int fd)
{
	int	output;
	int	len;
	int	nbr;

	len = count(n);
	nbr = len;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		ft_putchar_int('-', fd);
		n *= -1;
		nbr++;
	}
	output = reverse(n, 10);
	while (output >= 0 && len > 0)
	{
		ft_putchar_int((output % 10) + '0', fd);
		output /= 10;
		len--;
	}
	return (nbr - 1);
}
