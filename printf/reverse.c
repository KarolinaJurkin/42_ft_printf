/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkin <kjurkin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:32:23 by kjurkin           #+#    #+#             */
/*   Updated: 2025/03/13 19:53:03 by kjurkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	reverse(unsigned int n, int div)
{
	int	output;

	output = 0;
	while (n)
	{
		output = output * div + (n % div);
		n /= div;
	}
	return (output);
}
