/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:38:37 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/13 13:53:08 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	boo;
	int	i;

	boo = 1;
	i = 0;
	while (boo == 1 && str[i] != '\0')
	{
		if (str[i] <= 122 && str[i] >= 97)
			boo = 1;
		else
			boo = 0;
		i++;
	}
	return (boo);
}
