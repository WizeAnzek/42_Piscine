/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugolini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:28:50 by gugolini          #+#    #+#             */
/*   Updated: 2022/09/19 14:25:59 by gugolini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_str_tab(char **tab, int size)
{
	int		i;
	int		n;
	char	*tmp;
	int		check;

	i = 0;
	n = size;
	while (i <= --n)
	{
		check = 0;
		while (i < size - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				check++;
			}
			i++;
		}
		if (check == 0)
			n = 0;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	ft_sort_str_tab(&argv[1], argc - 1);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
