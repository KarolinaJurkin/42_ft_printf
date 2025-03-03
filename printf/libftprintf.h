/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkin <kjurkin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:04:33 by kjurkin           #+#    #+#             */
/*   Updated: 2025/03/03 19:55:14 by kjurkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdint.h>

int	ft_printf(const char *s, ...);
int	ft_putchar_int(char c, int fd);
int	ft_putstr_int(char *s, int fd);
int	ft_putnbr_int(int n, int fd);
int	ft_putnbr_uns(unsigned int n, int fd);
int	ft_putnbr_hex(char c, int n, int fd);
int	ft_putptr_int(uintptr_t n, int fd);

#endif