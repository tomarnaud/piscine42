/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:52:09 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/29 17:12:58 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_size(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

char	**ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		pos;
	int		j;
	char	*a;
	char	*b;
	int		size;

	pos = -1;
	j = 1;
	size = ft_size(tab);
	while (++pos < size - 1)
	{
		while (j < size - pos)
		{
			if (cmp(tab[pos], tab[pos + j]) > 0)
			{
				a = tab[pos];
				b = tab[pos + j];
				tab[pos] = b;
				tab[pos + j] = a;
			}
			j++;
		}
		j = 1;
	}
	return (tab);
}

#include <unistd.h>
void	ft_putstr(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
int	ft_strncmp(char *s1, char *s2)
{
	unsigned int	i;
	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int	i;
	i = 0;
	ft_advanced_sort_string_tab(av, &ft_strncmp);
	while (i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
}
