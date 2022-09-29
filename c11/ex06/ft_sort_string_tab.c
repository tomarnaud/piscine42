/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:57:34 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/28 16:40:51 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_size(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

char	**ft_sort_string_tab(char **tab)
{
	int		pos;
	int		j;
	char	*a;
	char	*b;
	int		size;

	pos = -1;
	j = 1;
	size = ft_size(tab);
	while (++pos <= size - 1)
	{
		while (j <= size - pos - 1)
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
		j = 1;
	}
	return (tab);
}
