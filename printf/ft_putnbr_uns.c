/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkin <kjurkin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:25:35 by kjurkin           #+#    #+#             */
/*   Updated: 2025/03/03 20:01:15 by kjurkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libftprintf.h"

int	ft_putnbr_uns(unsigned int n, int fd)
{
	int	count;

	count = 0;
	if (n < 10)
	{
		ft_putchar_int(n + '0', fd);
	}
	else
	{
		count += ft_putnbr_uns(n / 10, fd);
		count += ft_putchar_int((n % 10) + '0', fd);
	}
	return (count);
}
