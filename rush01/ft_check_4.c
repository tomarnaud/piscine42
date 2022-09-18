/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:05:59 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/18 13:17:07 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	
int **check_columns_4(int **tab)
{
	int	j;
	int	x;
	
	x = 1;
	while (x < 5)
	{	
		if (tab[x][0] == 4)
		{	
			j = 1;
			while (j < 5)
			{
				tab[x][j] = j;
				j++;
			}
		}
		else if (tab[x][5] == 4)
		{	
			j = 4;
			while (j > 0)
			{
				tab[x][j] = 5 - j;
				j--;
			}
		}
		x++;
	}
	return (tab);
}


int	**check_lines_4(int **tab)
{
	int	j;
	int	y;
	
	y = 1;
	while (y < 5)
	{	
		if (tab[0][y] == 4)
		{	
			j = 1;
			while (j < 5)
			{
				tab[j][y] = j;
				j++;
			}
		}
		else if (tab[5][y] == 4)
		{	
			j = 4;
			while (j > 0)
			{
				tab[j][y] = 5 - j;
				j--;
			}
		}
		y++;
	}
	return (tab);
}

int **check_lines_1(int **tab)
{
	int	y;

	y = 1;
	while (y < 5)
	{
		if (tab[0][y] == 1)
			tab[1][y] = 4;
		else if (tab[5][y] == 1)
			tab[4][y] = 4;
		y++;
	}
	return (tab);
}

int	**check_columns_1(int **tab)
{
	int x;

	x = 1;
	while (x < 5)
	{
		if (tab[x][0] == 1)
			tab[x][1] = 4;
		else if (tab[x][5] == 1)
			tab[x][4] = 4;
		x++;
	}
	return (tab);
}

int	**ft_check_4(int **tab)
{
	check_lines_4(tab);
	check_columns_4(tab);
	check_lines_1(tab);
	check_columns_1(tab);
	return (tab);
}
