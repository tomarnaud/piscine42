/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:41:45 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/20 10:39:15 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	out;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	out = nb;
	while (nb > 1)
	{
		out = out * (nb - 1);
		nb--;
	}
	return (out);
}
