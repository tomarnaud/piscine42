/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:56:51 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/28 18:31:20 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi_white(char *str);

void	ft_putnbr(int nb);

int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
int		ft_mul(int a, int b);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_valid(int b, char c)
{
	if (b == 0 && c == 47)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	else if (b == 0 && c == 37)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	else
		return (1);
}

int	ft_op(char c)
{
	if (c == '+')
		return (0);
	if (c == '-')
		return (1);
	if (c == '/')
		return (2);
	if (c == '%')
		return (3);
	if (c == '*')
		return (4);
	else
	{
		write(1, "0\n", 2);
		return (-1);
	}
}

int	main(int argc, char **argv)
{
	int	val1;
	int	val2;
	int	res;
	int	(*f[5])(int a, int b);

	if (argc != 4)
		return (0);
	f[0] = &ft_add;
	f[1] = &ft_sub;
	f[2] = &ft_div;
	f[3] = &ft_mod;
	f[4] = &ft_mul;
	if (ft_strlen(argv[2]) != 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	val1 = ft_atoi_white(argv[1]);
	val2 = ft_atoi_white(argv[3]);
	if (ft_check_valid(val2, argv[2][0]) == 0 || ft_op(argv[2][0]) == -1)
		return (0);
	res = f[ft_op(argv[2][0])](val1, val2);
	ft_putnbr(res);
	write(1, "\n", 1);
}
