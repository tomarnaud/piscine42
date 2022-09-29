/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:25:32 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/09 11:19:17 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	x;
	char	y;

	x = 80;
	y = 78;
	if (n >= 0)
	{
		write(1, &x, 1);
	}
	else
	{
		write(1, &y, 1);
	}
}
