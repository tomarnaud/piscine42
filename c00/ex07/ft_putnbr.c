/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:44:32 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/10 14:08:09 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb);

int main()
{
	ft_putnbr(4000);
	return(0);
}

void	ft_putnbr(int nb)
{
	long	b;
	char	a;
	long	num;

	num = nb;
	if (num <= 0)
	{
		write (1, "-", 1);
		num = num * -1;
	}
	b = 100000000000;
	while (b > num && num != 0)
	{
		b = b / 10;
	}
	a = num / b + 48;
	write(1, &a, 1);
	while (b >= 10 && num != 0)
	{
		num = num - b * (a - 48);
		b = b / 10;
		a = num / b + 48;
		write (1, &a, 1);
		if (a == '0')
			a = '1';
	}
}	
