/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:31:48 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/26 15:34:14 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_base(char *base, int baselen);

int	ft_atoi_base(char *str, char *base);

int	ft_strlen(char *str);

char	ft_putchar(char *base, int baselen, long int nb)
{
	char	a;

	if (nb < baselen)
		a = base[nb];
	if (nb >= baselen)
		nb = nb % baselen;
	a = base[nb];
	return (a);
}

int	ft_check_baseto(char *base, int baselen)
{
	int	pos;
	int	i;

	pos = 0;
	while (pos < baselen -1)
	{
		i = 1;
		if (base[pos] == 45 || base[pos] == 43)
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

int	ft_len_num(int nbr, int baselen)
{
	int	len_num;

	if (nbr == 0)
		return (1);
	len_num = 0;
	while (nbr != 0)
	{
		nbr = nbr / baselen;
		len_num++;
	}
	return (len_num);
}

char	*ft_putnbr_base(char *dest, int nbr, char *base, int len)
{
	long int	nb;
	int			i;
	int			len_num;

	i = 0;
	nb = nbr;
	len_num = ft_len_num(nbr, len);
	if (nbr < 0)
	{
		dest[0] = '-';
		nb = nb * -1;
		len_num = len_num + 1;
	}
	if (nbr == 0)
		dest[0] = base[0];
	while (nb != 0)
	{
		dest[len_num - ++i] = ft_putchar(base, len, nb);
		nb = nb / len;
	}
	return (dest);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		baselen;
	char	*dest;
	int		len_num;

	len_num = 0;
	baselen = 0;
	baselen = ft_strlen(base_from);
	if (ft_check_base(base_from, baselen) == 0)
		return (0);
	baselen = ft_strlen(base_to);
	if (ft_check_base(base_to, baselen) == 0)
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	len_num = ft_len_num(nb, baselen);
	if (nb < 0)
		len_num = len_num + 1;
	dest = malloc(sizeof(dest) * (len_num + 1));
	if (dest == NULL)
		return (NULL);
	dest = ft_putnbr_base(dest, nb, base_to, baselen);
	dest[len_num] = '\0';
	return (dest);
}
