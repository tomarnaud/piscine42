/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:25:57 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/27 14:02:50 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_fill_word(char *dest, char *str, int i, int total)
{
	int	n;

	n = 0;
	dest = malloc(sizeof(char) * i + 1);
	if (dest == NULL)
		return (0);
	while (i != 0)
	{
		dest[n] = str[total - i];
		n++;
		i--;
	}
	dest[n] = '\0';
	return (dest);
}

int	ft_countwords(char *str, char *set)
{
	int	tot;
	int	count;

	count = 0;
	tot = 0;
	while (str[tot] != '\0')
	{
		if (ft_check(set, str[tot]) == 0 && ft_check(set, str[tot + 1]) == 1)
			count++;
		if (ft_check(set, str[tot]) == 0 && str[tot + 1] == '\0')
			count++;
		tot++;
	}
	return (count);
}

char	**ft_fill_tab(char **dest, char *str, char *charset, int charsetlen)
{
	int	total;
	int	j;
	int	i;
	int	count;

	i = -1;
	total = -1;
	count = 0;
	while (str[++total] != '\0' && ++i > -2)
	{
		j = -1;
		while (++j != charsetlen)
		{
			if (str[total] == charset[j] && i != 0)
			{
				count++;
				dest[count - 1] = ft_fill_word(dest[count - 1], str, i, total);
				i = -1;
			}
			else if (str[total] == charset[j] && i == 0)
				i--;
		}
	}
	dest[count] = ft_fill_word(dest[count], str, (i + 1), total);
	return (dest);
}

char	**ft_split(char	*str, char	*charset)
{
	int		count;
	int		charsetlen;
	char	**dest;

	charsetlen = 0;
	while (charset[charsetlen] != '\0')
		charsetlen++;
	dest = NULL;
	count = ft_countwords(str, charset) + 1;
	dest = malloc(sizeof(dest) * count);
	if (dest == NULL)
		return (0);
	if (count > 1)
		dest = ft_fill_tab(dest, str, charset, charsetlen);
	dest[count - 1] = 0;
	return (dest);
}
