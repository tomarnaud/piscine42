/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:55:49 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/28 16:04:27 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*dest;
	int	i;

	i = -1;
	dest = NULL;
	dest = malloc(sizeof(int) * length);
	if (dest == NULL)
		return (NULL);
	while (++i <= (length - 1))
	{
		dest[i] = (*f)(tab[i]);
	}
	return (dest);
}
