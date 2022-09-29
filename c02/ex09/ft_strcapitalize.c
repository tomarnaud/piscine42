/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:49:08 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/13 19:05:36 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_checkprev_alphanum(char *str, int i)
{
	int	check;

	if (str[i - 1] <= 90 && str[i - 1] >= 65)
		check = 1;
	else if (str[i - 1] <= 122 && str[i - 1] >= 97)
		check = 1;
	else if (str[i - 1] <= 57 && str[i - 1] >= 48)
		check = 1;
	else
		check = 0;
	return (check);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	checkprev;

	i = 0;
	while (str[i] != '\0')
	{
		checkprev = ft_checkprev_alphanum(str, i);
		if (checkprev == 1 && i != 0)
		{
			if (str[i] <= 90 && str[i] >= 65)
				str[i] = str[i] + 32;
		}	
		else if (checkprev == 0 || i == 0)
		{
			if (str[i] <= 122 && str[i] >= 97)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
