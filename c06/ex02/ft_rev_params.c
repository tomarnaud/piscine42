/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:45:02 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/20 11:19:12 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	num;

	i = 0;
	num = argc - 1;
	while (num != 0)
	{
		i = 0;
		while (argv[num][i] != '\0')
		{
			write(1, &argv[num][i], 1);
			i++;
		}
		write(1, "\n", 1);
		num--;
	}
}
