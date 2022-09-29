/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:57:53 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/26 13:14:47 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

int	ft_convert_pos(int nb)
{
	nb = nb * (-1);
	write(1, "-", 1);
	return (nb);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0)
	{
		if (nb < 10)
		{
			nb = nb + '0';
			write(1, &nb, 1);
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
	else if (nb == -2147483648)
	{
		nb = ft_convert_pos(nb);
		write(1, "2", 1);
		ft_putnbr(147483648);
	}
	else
	{
		nb = ft_convert_pos(nb);
		ft_putnbr(nb);
	}
}

void	ft_put_str_nl(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_put_str_nl(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_put_str_nl(par[i].copy);
		i++;
	}
}
