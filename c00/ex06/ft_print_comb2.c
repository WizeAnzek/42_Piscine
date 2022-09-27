/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugolini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:04:51 by gugolini          #+#    #+#             */
/*   Updated: 2022/09/10 16:12:34 by gugolini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_a_pair(char *pairs, int n);
void	incrementa(char *pairs);
void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	char	pairs[2];

	pairs[0] = 0;
	pairs[1] = 1;
	while (pairs[0] < 99)
	{
		print_a_pair(pairs, 0);
		ft_putchar(' ');
		print_a_pair(pairs, 1);
		if (pairs[0] < 98)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		incrementa(pairs);
	}
}

void	print_a_pair(char *pairs, int n)
{
	char	ascii_zero;

	ascii_zero = 48;
	if (pairs[n] < 10)
	{
		ft_putchar('0');
		ft_putchar(pairs[n] + ascii_zero);
	}
	else
	{
		ft_putchar(pairs[n] / 10 + ascii_zero);
		ft_putchar(pairs[n] % 10 + ascii_zero);
	}
}

void	incrementa(char *pairs)
{
	pairs[1]++;
	if (pairs[1] > 99)
	{
		pairs[0]++;
		pairs[1] = pairs[0] + 1;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
