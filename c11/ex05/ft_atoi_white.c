/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_white.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:08:11 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/28 13:09:38 by tharnaud         ###   ########.fr       */
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

int	ft_create_outw(int i, int countnum, int sign, char *str)
{
	int	out;

	while (str[i] >= 48 && str[i] <= 57)
	{
		if (countnum == 0)
		{
			out = str[i] - 48;
			if (sign == 1)
				out = out * (-1);
		}
		else if (sign == 0)
			out = (out * 10) + (str[i] - 48);
		else
			out = (out * 10) - (str[i] - 48);
		countnum++;
		i++;
	}
	return (out);
}

int	ft_atoi_white(char *str)
{
	int	i;
	int	countmin;
	int	out;
	int	countnum;
	int	sign;

	i = 0;
	countmin = 0;
	sign = 0;
	countnum = 0;
	while (ft_checkwhite(str[i]) == 1)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			countmin++;
		i++;
	}
	if (countmin % 2 == 1)
		sign = 1;
	if (str[i] >= 48 && str[i] <= 57)
		out = ft_create_outw(i, countnum, sign, str);
	else
		out = 0;
	return (out);
}
