/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:55:46 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/27 18:07:20 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(char *base, int baselen, long int nb)
{
	if (nb < baselen)
		write(1, &base[nb], 1);
	if (nb >= baselen)
	{
		ft_putnbr(base, baselen, (nb / baselen));
		ft_putnbr(base, baselen, (nb % baselen));
	}
}

int	ft_check_base(char *base, int baselen)
{
	int	pos;
	int	i;

	pos = 0;
	while (pos < baselen -1)
	{
		i = 1;
		if (base[pos] == 45 || base[pos] == 43)
			return (0);
		if (base[pos + 1] == 45 || base[pos + 1] == 43)
			return (0);
		while (i < baselen - pos)
		{
			if (base[pos] == base[pos + i])
				return (0);
			i++;
		}
		pos ++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			baselen;
	long int	nb;

	nb = nbr;
	baselen = 0;
	while (base[baselen] != '\0')
		baselen++;
	if (baselen == 0 || baselen == 1)
		return ;
	if (ft_check_base(base, baselen) == 0)
		return ;
	if (nbr < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	ft_putnbr(base, baselen, nb);
}
