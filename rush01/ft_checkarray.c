/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkarray.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:39:54 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/17 19:56:17 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int **ft_arraycheck(int **tab)
{
	int	x;
	int	y;
	int *check:
	int i;
	int j;
	int *store:

	x = 1;
	y = 1;
	i = 1;
	j = 1;
	check = NULL;
	store = NULL;
	check = malloc(sizeof(check)*5);
	store = malloc(sizeof(store)*5);

	while (y < 5)
	{
		while (x < 5)
		{
			if (tab[x][y] == 0)
			{
				while (i < 5)
				{
					if (tab[i][y] != 0)





