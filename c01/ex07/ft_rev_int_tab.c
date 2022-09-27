/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugolini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:35:16 by gugolini          #+#    #+#             */
/*   Updated: 2022/09/13 18:54:48 by gugolini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	pivot;

	pivot = size / 2;
	i = 0;
	while (--size >= pivot)
	{
		j = tab[i];
		tab[i] = tab[size];
		tab[size] = j;
		i++;
	}
}
