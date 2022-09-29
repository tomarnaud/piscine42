/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:18:45 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/26 11:48:22 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checkwhite(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_check_base(char *base, int baselen)
{
	int	pos;
	int	i;

	if (baselen == 1 || baselen == 0)
		return (0);
	pos = 0;
	while (pos < baselen -1)
	{
		i = 1;
		if (base[pos] == 45 || base[pos] == 43)
			return (0);
		if (base[pos + 1] == 45 || base[pos + 1] == 43)
			return (0);
		if (ft_checkwhite(base[pos]) == 1 || ft_checkwhite(base[pos + 1]) == 1)
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

long int	ft_count(char *str, char *base, int i, int baselen)
{	
	long int	out;
	int			j;

	out = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] != base[j] && base[j] != '\0')
			j++;
		if (base[j] != '\0')
			out = out * baselen + j;
		else
			return (out);
		i++;
	}
	return (out);
}

int	ft_atoi_base(char *str, char *base)
{
	int			i;
	long int	out;
	int			sign;
	int			baselen;

	baselen = 0;
	i = 0;
	sign = 0;
	while (base[baselen] != '\0')
		baselen++;
	while (ft_checkwhite(str[i]) == 1)
		i++;
	if (ft_check_base(base, baselen) == 0)
		return (0);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	out = ft_count(str, base, i, baselen);
	if (sign % 2 == 1)
		return (out * -1);
	return (out);
}
