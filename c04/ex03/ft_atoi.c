/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugolini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:16:17 by gugolini          #+#    #+#             */
/*   Updated: 2022/09/17 12:21:13 by gugolini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c);

int	ft_atoi(char *str)
{
	int	i;
	int	segno;
	int	result;

	i = 0;
	segno = 1;
	result = 0;
	while (ft_is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			segno = -segno;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10;
		result = result + (str[i] - 48);
		i++;
	}
	if (segno == -1)
		return (-result);
	return (result);
}

int	ft_is_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}
