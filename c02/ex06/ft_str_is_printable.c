/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:03:26 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/13 13:58:53 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	boo;
	int	i;

	boo = 1;
	i = 0;
	while (boo == 1 && str[i] != '\0')
	{
		if (str[i] <= 126 && str[i] >= 32)
			boo = 1;
		else
			boo = 0;
		i++;
	}
	return (boo);
}
