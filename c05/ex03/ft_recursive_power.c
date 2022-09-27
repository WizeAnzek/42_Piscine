/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugolini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 07:19:55 by gugolini          #+#    #+#             */
/*   Updated: 2022/09/19 14:49:23 by gugolini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	rec_power(int nb, int power, int res);

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (rec_power(nb, power, res));
}

int	rec_power(int nb, int power, int res)
{
	res *= nb;
	power--;
	if (!power)
		return (res);
	else
		return (rec_power(nb, power, res));
}
