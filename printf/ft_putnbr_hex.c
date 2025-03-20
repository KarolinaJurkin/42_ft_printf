/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkin <kjurkin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:32:29 by kjurkin           #+#    #+#             */
/*   Updated: 2025/03/20 16:31:19 by kjurkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_hex(char c, int n, int fd)

{
	unsigned int	output;
	int				nbr;
	int				len;

	output = (unsigned int) n;
	output = reverse(output, 16);
	len = count(output);
	if (n < 0)
		len--;
	nbr = len;
	while (output >= 0 && len > 0)
	{
		if (output % 16 < 10)
			ft_putchar_int((output % 16) + '0', fd);
		else if (c == 'x')
			ft_putchar_int((output % 16) + 'a' - 10, fd);
		else
			ft_putchar_int((output % 16) + 'A' - 10, fd);
		output /= 16;
		len--;
	}
	return (nbr);
}
