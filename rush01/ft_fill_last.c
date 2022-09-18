/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:37:54 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/18 12:04:20 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**ft_fill_last(int **tab)
{
	int x;
	int y;
	int count;
	int i;
	int sum;

	x = 1;
	y = 1;
	while (x < 5)
	{
		i = 0;
		sum = 0;
		count = 0;
		while(i < 4)
		{
			if(tab[x][y + i] != 0)
			{
				count++;
				sum = sum + tab [x][y + i];
			}
			i++;
		}
		i = 0;
		if (count == 3)
		{
			while(tab[x][y + i] != 0 && i < 4)
				i++;
			tab[x][y + i] = 10 - sum;
		}
		x++;
	}
	x = 1;
	y = 1;
	while (y < 5)
	{
		i = 0;
		sum = 0;
		count = 0;
		while(i < 4)
		{
			if(tab[x + i][y] != 0)
			{
				count++;
				sum = sum + tab [x + i][y];
			}
			i++;
		}
		i = 0;
		if (count == 3)
		{
			while(tab[x + i][y] != 0 && i < 4)
				i++;
			tab[x + i][y] = 10 - sum;
		}
		y++;
	}
	return (tab);
}
