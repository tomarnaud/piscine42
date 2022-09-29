/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:19:55 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/26 18:29:41 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_destlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	destlen;

	i = 0;
	j = 0;
	destlen = 0;
	while (i <= size - 1)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			destlen++;
			j++;
		}
		i++;
	}
	i = 0;
	while (sep[i] != 0)
		i++;
	if (size > 1)
		destlen = destlen + (i * (size - 1));
	return (destlen);
}

char	*ft_fillstr(char **strs, char *sep, int size, char *dest)
{
	int	i;
	int	j;
	int	desti;

	i = 0;
	desti = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			dest[desti] = strs[i][j];
			desti++;
			j++;
		}
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
		{
			dest[desti] = sep[j];
			desti++;
			j++;
		}
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		destlen;
	char	*dest;

	dest = NULL;
	destlen = ft_destlen(size, strs, sep);
	dest = malloc(sizeof(dest) * (destlen + 1));
	if (dest == NULL)
		return (NULL);
	if (size != 0)
		dest = ft_fillstr(strs, sep, size, dest);
	dest[destlen] = '\0';
	return (dest);
}
