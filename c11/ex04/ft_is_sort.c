/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:21:11 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/29 12:16:51 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	pos;
	int	neg;

	i = 0;
	pos = 0;
	neg = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			pos++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			neg++;
		i++;
	}
	if (pos == i || neg == i)
		return (1);
	else
		return (0);
}
