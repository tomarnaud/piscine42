/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:31:42 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/09 14:32:40 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb(void);

void	ft_printchars(char a, char b, char c);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	b = 49;
	c = 50;
	while (a < 56)
	{
		ft_printchars(a, b, c);
		if (a != 55)
			write(1, ", ", 2);
		c++;
		while (c == 58 && b < 57)
		{
			b++;
			c = b + 1;
		}
		while (b == 57 && a < 57)
		{
			a++;
			b = a + 1;
			c = b + 1;
		}
	}
}

void	ft_printchars(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}
