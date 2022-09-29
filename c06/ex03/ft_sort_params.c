/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:46:48 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/20 14:25:34 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

char	**ft_sort_char_tab(char **tab, int size)
{
	int		pos;
	int		j;
	char	*a;
	char	*b;

	pos = 1;
	j = 1;
	while (pos <= size)
	{
		while (j <= size - pos)
		{
			if (ft_strcmp(tab[pos], tab[pos + j]) > 0)
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
	return (tab);
}

int	main(int argc, char**argv)
{
	int	i;
	int	num;
	int	size;

	size = argc - 1;
	argv = ft_sort_char_tab(argv, size);
	i = 0;
	num = 1;
	while (num < argc)
	{
		i = 0;
		while (argv[num][i] != '\0')
		{
			write(1, &argv[num][i], 1);
			i++;
		}
		write(1, "\n", 1);
		num++;
	}
}
