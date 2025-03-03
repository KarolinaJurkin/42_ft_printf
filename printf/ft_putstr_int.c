/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkin <kjurkin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:24:32 by kjurkin           #+#    #+#             */
/*   Updated: 2025/02/27 18:12:57 by kjurkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	strlength(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_putstr_int(char *s, int fd)
{
	int	len;

	len = strlength(s);
	write(fd, s, len);
	return (len);
}
