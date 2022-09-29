/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:52:34 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/26 17:13:45 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		srclen;
	int		i;
	char	*dest;

	srclen = 0;
	if (!src)
		return (0);
	i = 0;
	while (src[srclen] != '\0')
		srclen++;
	dest = malloc(sizeof(src) * (srclen + 1));
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
