/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:17:52 by tharnaud          #+#    #+#             */
/*   Updated: 2022/09/15 17:18:47 by tharnaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dinc;
	unsigned int	sinc;
	unsigned int	stotal;
	unsigned int	dtotal;

	dinc = 0;
	sinc = 0;
	stotal = 0;
	while (dest[dinc] != '\0' && dinc < size)
		dinc++;
	dtotal = dinc;
	while (src[stotal] != '\0')
		stotal++;
	if (size != 0)
	{	
		while (src[sinc] != '\0' && dinc < size -1)
		{
			dest[dinc] = src[sinc];
			sinc++;
			dinc++;
		}
	}
	if (dinc > dtotal)
		dest[dinc] = '\0';
	return (dtotal + stotal);
}
