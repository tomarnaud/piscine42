/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:18:50 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/20 11:17:05 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	while (num < argc)
	{
		i = 0;
		while (argv[num][i] != '\0')
		{
			write(1, &argv[num][i], 1);
			i++;
		}
		write(1, "\n", 1);
		num++;
	}
}
