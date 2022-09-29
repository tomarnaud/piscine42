/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 17:43:34 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/12 10:29:45 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	pos;
	int	j;
	int	a;
	int	b;

	size = size - 1;
	pos = 0;
	j = 1;
	while (pos <= size)
	{	
		while (j <= size - pos)
		{
			if (tab[pos] > tab[pos + j])
			{
				a = tab[pos];
				b = tab[pos + j];
				tab[pos] = b;
				tab[pos + j] = a;
			}
			j++;
		}
		pos++;
		j = 1;
	}
}
