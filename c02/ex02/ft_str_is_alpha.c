/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:55:02 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/13 13:40:32 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	boo;
	int	i;

	boo = 1;
	i = 0;
	while (boo == 1 && str[i] != '\0')
	{
		if (str[i] <= 90 && str[i] >= 65)
			boo = 1;
		else if (str[i] <= 122 && str[i] >= 97)
			boo = 1;
		else
			boo = 0;
		i++;
	}
	return (boo);
}
