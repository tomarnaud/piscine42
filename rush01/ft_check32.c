/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check32.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:17:52 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/18 13:51:30 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**ft_check32(int **tab)
{
	int x;
	int y;
	int z;

	x = 1;
	y = 0;
	z = 5;
	while (x < 5)
	{
		if (tab[x][y] == 3 && tab [x][z] == 2)
		{
			tab[x][y + 3] = 4;
			if (tab[x][y + 4] != 0)
			{
				if (tab[x][y+4] == 1)
				{
					tab[x][y+1] = 2;
					tab[x][y+2] = 3;
				}
				if (tab[x][y+4] == 2)
				{
					tab[x][y+1] = 1;
					tab[x][y+2] = 2;
				}
				if (tab[x][y+4] == 3)
				{
					tab[x][y+1] = 1;
					tab[x][y+2] = 2;
				}
			}
			if (tab[x][y + 1] == 2)
			{
				tab[x][y + 2] = 3;
				tab[x][y + 4] = 1;
			}
			if (tab[x][y + 2] == 2)
			{
				tab[x][y + 1] = 1;
				tab[x][y + 4] = 3;
			}
		}
		x++;
	}
	y = 1;
	x = 0;
	z = 5;
	while (y < 5)
	{
		if (tab[x][y] == 3 && tab [z][y] == 2)
		{
			tab[x + 3][y] = 4;
			if (tab[x + 4][y] != 0)
			{
				if (tab[x + 4][y] == 1)
				{
					tab[x + 1][y] = 2;
					tab[x + 2][y] = 3;
				}
				if (tab[x + 4][y] == 2)
				{
					tab[x + 1][y] = 1;
					tab[x + 2][y] = 2;
				}
				if (tab[x + 4][y] == 3)
				{
					tab[x + 1][y] = 1;
					tab[x + 2][y] = 2;
				}
			}
			if (tab[x + 1][y] == 2)
			{
				tab[x + 2][y] = 3;
				tab[x + 4][y] = 1;
			}
			if (tab[x + 2][y] == 2)
			{
				tab[x + 1][y] = 1;
				tab[x + 4][y] = 3;
			}
		}
		y++;
	}
	return (tab);
}
