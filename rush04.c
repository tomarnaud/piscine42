/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchabeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 09:59:14 by cchabeau          #+#    #+#             */
/*   Updated: 2022/09/10 19:28:09 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_start(int c, int d)
{
	while (c <= d)
	{
		if (c != 1 && c != d)
			ft_putchar('B');
		else if (c == 1)
			ft_putchar('A');
		else
			ft_putchar('C');
		c++;
	}
}

void	print_middle(int c, int d)
{
	while (c <= d)
	{
		if (c == 1 || c == d)
			ft_putchar('B');
		else
			ft_putchar(32);
		c++;
	}
}

void	print_end(int c, int d)
{
	while (c <= d)
	{
		if (c != 1 && c != d)
			ft_putchar('B');
		else if (c == 1)
			ft_putchar('C');
		else
			ft_putchar('A');
		c++;
	}
}
		

void	rush(int x, int y)
{
	int	col;
	int	row;

	if (x <= 0 || y <= 0)
		write(1, "ERROR : expecting integer higher than 0.\n", 41);
	else
	{
		col = 1;
		row = 1;
		while (row <= y)
		{
			if (row == 1)
				print_start(col, x);
			else if (row == y)
				print_end(col,x);
			else
				print_middle(col, x);
			ft_putchar('\n');
			row++;
			col = 1;
		}
	}
}
