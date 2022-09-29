/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:36:09 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/19 11:10:07 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_checkwhite(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_create_out(int i, int countnum, int sign, char *str)
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

int	ft_atoi(char *str)
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
		out = ft_create_out(i, countnum, sign, str);
	else
		out = 0;
	return (out);
}
