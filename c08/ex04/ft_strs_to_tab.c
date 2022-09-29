/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:28:24 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/25 12:13:31 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		srclen;
	int		i;
	char	*dest;

	srclen = 0;
	if (src == NULL)
		return (0);
	i = 0;
	dest = NULL;
	while (src[srclen] != '\0')
		srclen++;
	dest = malloc(sizeof(char) * (srclen + 1));
	if (dest == NULL)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_free(int i, struct s_stock_str *dest)
{
	while (i >= 0)
	{
		free(dest[i].copy);
		i--;
	}
	free(dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*dest;
	int					i;

	dest = NULL;
	dest = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	while (i < ac)
	{
		dest[i].size = ft_strlen(av[i]);
		dest[i].str = av[i];
		dest[i].copy = ft_strdup(av[i]);
		if (dest[i].copy == NULL)
		{	
			ft_free(i, dest);
			return (NULL);
		}
		i++;
	}
	dest[ac].str = NULL;
	return (dest);
}
