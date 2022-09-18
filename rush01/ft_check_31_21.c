/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_31_21.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:01:04 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/18 14:41:03 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int **ft_putnumber_lines_21(int **tab, int y)
{
	if (tab[1][y] == 4)
		tab[4][y] = 3;
	if (tab[4][y] == 4)
		tab[1][y] = 3;
	if (tab[2][y] == 1)
		tab[3][y] = 2;
	else if (tab[2][y] == 2)
		tab[3][y] = 1;
	return (tab);
}

int **ft_check_lines_21(int **tab)
{
	int	y;

	y = 1;
	while (y < 5)
	{
		if (tab[0][y] == 1 && tab[5][y] == 2)
			ft_putnumber_lines_21(tab, y);
		else if (tab[0][y] == 2 && tab[5][y] == 1)
			ft_putnumber_lines_21(tab, y);
		y++;
	}
	return (tab);
}

int	**ft_putnumber_columns_21(int **tab, int x)
{
	if (tab[x][1] == 4)
		tab[x][4] = 3;
	else if (tab[x][1] == 4)
		tab[x][4] = 3;
	if (tab[x][2] == 1)
		tab[x][3] = 2;
	else if (tab[x][2] == 2)
		tab[x][3] = 1;
	return (tab);
}

int **ft_check_columns_21(int **tab)
{
	int	x;

	x = 1;
	while (x < 5)
	{
		if (tab[x][0] == 1 && tab[x][5] == 2)
			ft_putnumber_columns_21(tab, x);
		else if (tab[x][0] == 2 && tab[x][5] == 1)
			ft_putnumber_columns_21(tab, x);
		x++;
	}
	return (tab);
}


int	**one_in_line_31(int **tab, int y, int j)
{	
	if (j == 1)
	{
		tab[2][y] = 3;
		tab[3][y] = 2;
	}
	else if (j == 2)
	{
		tab[1][y] = 2;
		tab[3][y] = 3;
	}
	else if (j == 3)
	{
		tab[1][y] = 2;
		tab[2][y] = 3;
	}
	return (tab);
}

int	**one_in_line_13(int **tab, int y, int j)			
{	
	if (j == 4)
	{
		tab[3][y] = 3;
		tab[2][y] = 2;
	}
	else if (j == 3)
	{
		tab[4][y] = 2;
		tab[2][y] = 3;
	}
	else if (j == 2)
	{
		tab[4][y] = 2;
		tab[3][y] = 3;
	}
	return (tab);
}


int **ft_check_lines_31(int **tab)
{
	int	j;
	int	y;

	y = 1;
	while (y < 5)
	{
		if (tab[0][y] == 3 && tab[5][y] == 1)
		{
			j = 1;
			while (j < 5)
			{	
				if (tab[j][y] == 1)
					one_in_line_31(tab, y, j);
				else if (tab[j][y] == 2 && j == 3)
				{	
					tab[1][y] = 1;
					tab[2][y] = 3;
				}
				else if (tab[j][y] == 3 && j == 3)
				{
					tab[1][y] = 2;
					tab[2][y] = 1;
				}
				j++;
			}	
		}
		else if (tab[0][y] == 1 && tab[5][y] == 3)
		{
			j = 5;
			while (j > 0)
			{
				if (tab[j][y] == 1)
					one_in_line_13(tab, y, j);
				else if (tab[j][y] == 2 && j == 2)
				{	
					tab[4][y] = 1;
					tab[3][y] = 3;
				}
				else if (tab[j][y] == 3 && j == 2)
				{
					tab[4][y] = 2;
					tab[3][y] = 1;
				}
				j--;
			}
		}
		y++;
	}
	return (tab);
}

int	**one_in_column_31(int **tab, int x, int j)
{
	if (j == 1)
	{
		tab[x][2] = 3;
		tab[x][3] = 2;
	}
	else if (j == 2)
	{
		tab[x][1] = 2;
		tab[x][3] = 3;
	}
	else if (j == 3)
	{
		tab[x][1] = 2;
		tab[x][2] = 3;
	}
	return (tab);
}

int	**one_in_column_13(int **tab, int x, int j)
{
	if (j == 4)
	{
		tab[x][3] = 3;
		tab[x][2] = 2;
	}
	else if (j == 3)
	{
		tab[x][4] = 2;
		tab[x][2] = 3;
	}
	else if (j == 2)
	{
		tab[x][4] = 2;
		tab[x][3] = 3;
	}
	return(tab);
}

int **ft_check_columns_31(int **tab)
{
	int	j;
	int	x;

	x = 1;
	while (x < 5)
	{
		if (tab[x][0] == 3 && tab[x][5] == 1)
		{
			j = 1;
			while (j < 5)
			{	
				if (tab[x][j] == 1)
					one_in_column_31(tab, x, j);
				else if (tab[x][j] == 2 && j == 3)
				{	
					tab[x][1] = 1;
					tab[x][2] = 3;
				}
				else if (tab[x][j] == 3 && j == 3)
				{
					tab[x][1] = 2;
					tab[x][2] = 1;
				}
				j++;
			}
		}
		else if (tab[x][0] == 1 && tab[x][5] == 3)
		{
			j = 5;
			while (j > 0)
			{
				if (tab[x][j] == 1)	
					one_in_column_13(tab, x, j);
				else if (tab[x][j] == 2 && j == 2)
				{	
					tab[x][4] = 1;
					tab[x][3] = 3;
				}
				else if (tab[x][j] == 2 && j == 2)
				{	
					tab[x][4] = 2;
					tab[x][3] = 1;
				}
				j--;
			}
		}
		x++;
	}
	return (tab);
}

int	**ft_check_31(int **tab)
{
	ft_check_lines_31(tab);
	ft_check_columns_31(tab);
	return (tab);
}

int **ft_check_21(int **tab)
{
	ft_check_lines_21(tab);
	ft_check_columns_21(tab);
	return (tab);
}

int	**ft_check_31_21(int **tab)
{
	ft_check_31(tab);
	ft_check_21(tab);
	ft_check_31(tab);
	ft_check_21(tab);
	return (tab);
}
