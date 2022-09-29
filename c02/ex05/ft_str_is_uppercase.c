/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:47:02 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/13 17:11:21 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	boo;
	int	i;

	boo = 1;
	i = 0;
	while (boo == 1 && str[i] != '\0')
	{
		if (str[i] <= 90 && str[i] >= 65)
			boo = 1;
		else
			boo = 0;
		i++;
	}
	return (boo);
}
