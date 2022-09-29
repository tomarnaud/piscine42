/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:55:27 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/12 14:12:21 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	div;
	int	a;
	int	b;

	div = 0;
	while (div < size / 2)
	{
		a = tab[0 + div];
		b = tab[size - 1 - div];
		tab[size - 1 - div] = a;
		tab[0 + div] = b;
		div++;
	}
}
