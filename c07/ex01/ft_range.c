/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:15:53 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/27 13:59:29 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			*dest;
	long int	len;
	long int	i;

	len = 0;
	i = -1;
	if (max - min <= 0)
		return (NULL);
	if (min <= 0)
		len = (min * -1) + max;
	else
		len = max - min;
	dest = NULL;
	dest = malloc(sizeof(dest) * (len));
	if (dest == NULL)
		return (NULL);
	while (++i < len)
	{
		dest[i] = min + i;
	}
	return (dest);
}
