/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugolini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:19:13 by gugolini          #+#    #+#             */
/*   Updated: 2022/09/10 16:51:05 by gugolini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	c[10];
	int		i;
	long	long_nb;

	long_nb = nb;
	if (long_nb == 0)
		ft_putchar('0');
	if (long_nb < 0)
	{
		ft_putchar('-');
		long_nb = -long_nb;
	}
	i = 0;
	while (long_nb > 0)
	{
		c[i] = long_nb % 10 + '0';
		long_nb = long_nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(c[i]);
		i--;
	}
}
