/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkin <kjurkin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:25:35 by kjurkin           #+#    #+#             */
/*   Updated: 2025/03/26 17:28:16 by kjurkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libftprintf.h"

int	ft_putnbr_uns(unsigned int n, int fd)
{
	int				count;
	unsigned int	temp;

	count = 0;
	temp = n;
	if (n == 0)
		count = 1;
	while (temp > 0)
	{
		count++;
		temp /= 10;
	}
	if (n < 10)
	{
		ft_putchar_int(n + '0', fd);
	}
	else
	{
		ft_putnbr_uns(n / 10, fd);
		ft_putchar_int((n % 10) + '0', fd);
	}
	return (count - 1);
}
