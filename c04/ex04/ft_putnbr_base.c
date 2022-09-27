/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugolini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:29:25 by gugolini          #+#    #+#             */
/*   Updated: 2022/09/20 09:10:52 by gugolini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str);
void	print_nbr_base(int nbr, char *base, int size);
int		check_base(char *base, int size);

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = ft_strlen(base);
	if (check_base(base, size))
		print_nbr_base(nbr, base, size);
}

int	check_base(char *base, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (size >= 2)
	{
		while (i < size - 2)
		{
			if (base[i] == '+' || base[i] == '-')
				return (0);
			j = i + 1;
			while (j < size - 1)
			{
				if (base[i] == base[j])
					return (0);
				j++;
			}
			i++;
		}
		return (1);
	}
	return (0);
}

void	print_nbr_base(int nbr, char *base, int size)
{
	int		res[33];
	int		i;
	long	l;

	l = nbr;
	if (nbr < 0)
	{
		write(1, "-", 1);
		l = -l;
	}
	i = 0;
	while (l)
	{
		res[i++] = l % size;
		nbr = l / size;
	}
	res[i] = '\0';
	while (--i >= 0)
		write(1, &base[res[i]], 1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int        main(void)
{
    ft_putnbr_base(-12, "01");
    printf("\n");
    ft_putnbr_base(40, "poneyvif");
    printf("\n");
    ft_putnbr_base(894867, "0123456789");
    printf("\n");
    ft_putnbr_base(53, "0123456789abcdef");
}
