/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:08:27 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/27 13:58:39 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int			*dest;
	long int	len;
	long int	i;

	len = 0;
	i = -1;
	if (max - min <= 0)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	dest = NULL;
	dest = malloc(sizeof(int) * (len + 1));
	if (dest == NULL)
		return (-1);
	while (++i < len)
	{
		dest[i] = min + i;
	}
	*range = dest;
	return (len);
}
