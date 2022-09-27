/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugolini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:11:11 by gugolini          #+#    #+#             */
/*   Updated: 2022/09/17 17:58:35 by gugolini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nb(long long_nb);

void	ft_putnbr(int nb)
{
	long	long_nb;

	long_nb = nb;
	if (long_nb < 0)
	{
		long_nb = -long_nb;
		write(1, "-", 1);
		print_nb(long_nb);
	}
	else if (long_nb == 0)
		write(1, "0", 1);
	else
		print_nb(long_nb);
}

void	print_nb(long long_nb)
{
	char	str[10];
	int		i;

	i = 0;
	while (long_nb > 0)
	{
		str[i] = '0' + long_nb % 10;
		i++;
		long_nb = long_nb / 10;
	}
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}
