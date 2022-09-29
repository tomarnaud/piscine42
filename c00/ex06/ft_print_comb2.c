/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:59:21 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/09 13:28:51 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb2(void);

void	ft_putchardigit(char x)
{
	write(1, &x, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		ft_putchardigit(a / 10 + 48);
		ft_putchardigit(a % 10 + 48);
		write(1, " ", 1);
		ft_putchardigit(b / 10 + 48);
		ft_putchardigit(b % 10 + 48);
		if (a < 98)
		{
			write(1, ", ", 2);
		}
			b++;
		while (b == 100)
		{
			a++;
			b = a + 1;
		}
	}
}
