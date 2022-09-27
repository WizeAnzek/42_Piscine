/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugolini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:01:24 by gugolini          #+#    #+#             */
/*   Updated: 2022/09/24 15:31:04 by gugolini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;

	i = 0;
	while (par[i].str)
	{
		j = 0;
		while (par[i].str[j])
		{
			write(1, &(par[i].str[j]), 1);
			j++;
		}
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		j = 0;
		while (par[i].copy[j])
		{
			write(1, &(par[i].copy[j]), 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
