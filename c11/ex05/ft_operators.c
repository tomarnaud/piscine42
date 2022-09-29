/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operators.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:40:31 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/28 14:55:51 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_add(int a, int b)
{
	int	res;

	res = a + b;
	return (res);
}

int	ft_sub(int a, int b)
{
	int	res;

	res = a - b;
	return (res);
}

int	ft_div(int a, int b)
{
	int	res;

	res = a / b;
	return (res);
}

int	ft_mod(int a, int b)
{
	int	res;

	res = a % b;
	return (res);
}

int	ft_mul(int a, int b)
{
	int	res;

	res = a * b;
	return (res);
}
