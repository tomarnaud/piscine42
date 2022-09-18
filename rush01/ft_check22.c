/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check22.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:56:27 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/17 19:53:28 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**ft_check22(int **tab)
{
	int x;
	int y;
	int z;

	x = 1;
	y = 0;
	z = 5;
	while (x < 5)
	{
		if (tab[x][y] == 2 && tab [x][z] == 2)
		{
			if (tab[x][y + 1] == 1 && tab[x][y + 2] == 4)
			{
				tab[x][y + 3] = 2;
				tab[x][y + 4] = 3;
			}
			if (tab[x][y + 1] == 2 && tab[x][y + 2] == 1)
			{
				tab[x][y + 3] = 4;
				tab[x][y + 4] = 3;
			}
			if (tab[x][y + 1] == 3 && tab[x][y + 2] == 1)
			{
				tab[x][y + 3] = 4;
				tab[x][y + 4] = 2;
			}
			if (tab[x][y + 1] == 2 && tab[x][y + 2] == 4)
			{
				tab[x][y + 3] = 1;
				tab[x][y + 4] = 3;
			}
			if (tab[x][y + 1] == 3 && tab[x][y + 2] == 4)
			{
				tab[x][y + 3] = 1;
				tab[x][y + 4] = 2;
			}
		}
		x++;
	}
	y = 1;
	x = 0;
	z = 5;
	while (y < 5)
	{
		if (tab[x][y] == 2 && tab [z][y] == 2)
		{
			if (tab[x + 3][y] == 2 && tab[x + 4][y] == 3)
			{
				tab[x + 1][y] = 1;
				tab[x + 2][y] = 4;
			}
			if (tab[x + 3][y] == 4 && tab[x + 4][y] == 3)
			{
				tab[x + 1][y] = 2;
				tab[x + 2][y] = 1;
			}
			if (tab[x + 3][y] == 4 && tab[x + 4][y] == 2)
			{
				tab[x + 1][y] = 3;
				tab[x + 2][y] = 1;
			}
			if (tab[x + 3][y] == 1 && tab[x + 4][y] == 3)
			{
				tab[x + 1][y] = 2;
				tab[x + 2][y] = 4;
			}
			if (tab[x + 3][y] == 1 && tab[x + 4][y] == 2)
			{
				tab[x + 1][y] = 3;
				tab[x + 2][y] = 4;
			}
		}
		y++;
	}
	x = 1;
	y = 0;
	z = 5;
	while (x < 5)
	{
		if (tab[x][y] == 2 && tab [x][z] == 2)
		{
			if (tab[x][y + 3] == 2 && tab[x][y + 4] == 3)
			{
				tab[x][y + 1] = 1;
				tab[x][y + 2] = 4;
			}
			if (tab[x][y + 3] == 4 && tab[x][y + 4] == 3)
			{
				tab[x][y + 1] = 2;
				tab[x][y + 2] = 1;
			}
			if (tab[x][y + 3] == 4 && tab[x][y + 4] == 2)
			{
				tab[x][y + 1] = 3;
				tab[x][y + 2] = 1;
			}
			if (tab[x][y + 3] == 1 && tab[x][y + 4] == 3)
			{
				tab[x][y + 1] = 2;
				tab[x][y + 2] = 4;
			}
			if (tab[x][y + 3] == 1 && tab[x][y + 4] == 2)
			{
				tab[x][y + 1] = 3;
				tab[x][y + 2] = 4;
			}
		}
		x++;
	}
	y = 1;
	x = 0;
	z = 5;
	while (y < 5)
	{
		if (tab[x][y] == 2 && tab [z][y] == 2)
		{
			if (tab[x + 1][y] == 1 && tab[x + 2][y] == 4)
			{
				tab[x + 3][y] = 2;
				tab[x + 4][y] = 3;
			}
			if (tab[x + 1][y] == 2 && tab[x + 2][y] == 1)
			{
				tab[x + 3][y] = 4;
				tab[x + 4][y] = 3;
			}
			if (tab[x + 1][y] == 3 && tab[x + 2][y] == 1)
			{
				tab[x + 3][y] = 4;
				tab[x + 4][y] = 2;
			}
			if (tab[x + 1][y] == 2 && tab[x + 2][y] == 4)
			{
				tab[x + 3][y] = 1;
				tab[x + 4][y] = 3;
			}
			if (tab[x + 1][y] == 3 && tab[x + 2][y] == 4)
			{
				tab[x + 3][y] = 1;
				tab[x + 4][y] = 2;
			}
		}
		y++;
	}
	return (tab);
}
