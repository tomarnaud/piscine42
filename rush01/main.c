/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:12:57 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/18 13:23:42 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_write_tab(int **tab);

int **ft_check_4(int **tab);

int	**ft_check22(int **tab);

int **ft_check32(int **tab);

int	**ft_check_31_21(int **tab);

void ft_write_full_tab(int **tab);

int **ft_fill_zero(int **tab);

int	**ft_fill_last(int **tab);

int	**ft_fill_row(int **tab, char **argv, int x, int y);

int	**ft_fill_column(int **tab, char **argv, int x, int y);

int	main(int argc, char **argv)
{
	int size;
	int **tab;
	int tabi;
	int x;
	int y;

	tabi = 0;
	size = argc - 1;
	if (size != 1)
	{
		write(1, "Error, expecting 1 string with arguments", 41);
		return (0);
	}
	size = 30;
	while (size >= 0)
	{
		if (argv[1][size] <= 48 || argv[1][size] >= 53)
		{
			 write(1, "Error, expecting integers between 1 and 4", 42);
			 return (0);
		}
		size = size -2;
	}
	size = argc - 2;
	while (size >= 1)
	{
		if (argv[1][size] != 32)
		{
			write(1, "Error, expecting only spaces between integers", 44);
			return (0);
		}
	}
	tab = NULL;
	tab = malloc(sizeof(tab) * 6);
	if (tab == NULL)
		return (0);
	while (tabi != 6)
	{
		tab[tabi] = NULL;
		tab[tabi] = malloc(sizeof(tab) * 6);
		if (tab[tabi] == NULL)
			return(0);
		tabi++;
	}
	y = 0;
	x = 1;
	tab = ft_fill_row(tab, argv, x, y);
	y = 5;
	x = 1;
	tab = ft_fill_row(tab, argv, x, y);
	y = 1;
	x = 0;
	tab = ft_fill_column(tab, argv, x, y);
	y = 1;
	x = 5;
	tab = ft_fill_column(tab, argv, x, y);
	tab = ft_fill_zero(tab);
	ft_write_full_tab(tab);
	tab = ft_check_4(tab);
	write(1, "\n", 1);
	ft_write_full_tab(tab);
	write(1, "\n", 1);
	tab = ft_check32(tab);
	ft_write_full_tab(tab);
	tab = ft_check_31_21(tab);
	write(1, "\n", 1);
	ft_write_full_tab(tab);
	tab = ft_check22(tab);
	write(1, "\n", 1);
	ft_write_full_tab(tab);
	tab = ft_check22(tab);
	write(1, "\n", 1);
	ft_write_full_tab(tab);
	tab = ft_fill_last(tab);
	write(1, "\n", 1);
	ft_write_full_tab(tab);
	write(1, "\n", 1);
	tab = ft_check32(tab);
	ft_write_full_tab(tab);
	tab = ft_check_31_21(tab);
	write(1, "\n", 1);
	ft_write_full_tab(tab);
	tab = ft_check22(tab);
	write(1, "\n", 1);
	ft_write_full_tab(tab);
	tab = ft_check22(tab);
	write(1, "\n", 1);
	ft_write_full_tab(tab);
	tab = ft_fill_last(tab);
	write(1, "\n", 1);
	ft_write_full_tab(tab);
}

void ft_write_tab(int **tab)
{
	int x;
	int y;
	char a;
	x = 1;
	y = 1;

	while (y < 5)
	{
		x = 1;
		while (x < 5)
		{
			a = tab[y][x] + 48;
			write(1, &a, 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}

void ft_write_full_tab(int **tab)
{
	int x;
	int y;
	char a;
	x = 0;
	y = 0;

	while (y < 6)
	{
		x = 0;
		while (x < 6)
		{
			a = tab[y][x] + 48;
			write(1, &a, 1);
			x++;
			write(1, " ", 1);
		}
		write(1, "\n", 1);
		y++;
	}
}

int **ft_fill_zero(int **tab)
{
	int x;
	int y;
	x = 1;
	y = 1;

	while (y < 5)
	{
		x = 1;
		while (x < 5)
		{
			tab [y][x] = 0;
			x ++;
		}
		y++;
	}
	return (tab);
}

int	**ft_fill_row(int **tab, char **argv, int x, int y)
{
	int	a;
	if (y == 0)
	{
		a = 0;
		while (x != 5)
		{
			tab[y][x] = argv[1][a] - 48;
			x++;
			a = a + 2;
		}
	}
	if (y == 5)
	{
		a = 8;
		while (x != 5)
			{
				tab[y][x] = argv[1][a] - 48;
				x++;
				a = a + 2;
			}
	}
	return (tab);
}
int	**ft_fill_column(int **tab, char **argv, int x, int y)
{
	int	a;
	if (x == 0)
	{
		a = 16;
		while (y != 5)
		{
			tab[y][x] = argv[1][a] - 48;
			y++;
			a = a + 2;
		}
	}
	if (x == 5)
	{
		a = 24;
		while (y != 5)
			{
				tab[y][x] = argv[1][a] - 48;
				y++;
				a = a + 2;
			}
	}
	return (tab);
}


