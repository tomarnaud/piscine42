/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:31:50 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/13 13:43:33 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	boo;
	int	i;

	boo = 1;
	i = 0;
	while (boo == 1 && str[i] != '\0')
	{
		if (str[i] <= 57 && str[i] >= 48)
			boo = 1;
		else
			boo = 0;
		i++;
	}
	return (boo);
}
