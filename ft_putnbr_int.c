/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkin <kjurkin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:29:04 by kjurkin           #+#    #+#             */
/*   Updated: 2025/02/22 18:38:07 by kjurkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

int	ft_putnbr_int(int n, int fd)
{
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
	if (n < 10)
	{
		ft_putchar_int(n + '0', fd);
	}
	else
	{
		count += ft_putnbr_int(n / 10, fd);
		count += ft_putchar_int((n % 10) + '0', fd);
	}
	return (count);
}
