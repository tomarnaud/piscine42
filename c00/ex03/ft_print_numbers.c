/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:59:51 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/09 11:01:46 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	a;

	a = 48;
	while (a < 58)
	{
		write(1, &a, 1);
		a++;
	}
}
