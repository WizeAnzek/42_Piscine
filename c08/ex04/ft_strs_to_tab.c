/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugolini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:09:24 by gugolini          #+#    #+#             */
/*   Updated: 2022/09/24 15:27:52 by gugolini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int		ft_strlen(char *str);
char	*ft_strcpy(char *src, int size);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*tab;
	int				i;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].str = av[i];
		tab[i].size = ft_strlen(av[i]);
		tab[i].copy = ft_strcpy(av[i], tab[i].size);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *str, int size)
{
	char	*copia;
	int		i;

	copia = malloc(sizeof(char) * (size + 1));
	if (!copia)
		return (NULL);
	i = 0;
	while (str[i])
	{
		copia[i] = str[i];
		i++;
	}
	copia[i] = 0;
	return (copia);
}
