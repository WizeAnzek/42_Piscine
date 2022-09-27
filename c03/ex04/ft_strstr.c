/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugolini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:28:02 by gugolini          #+#    #+#             */
/*   Updated: 2022/09/15 17:39:52 by gugolini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	compare(char *slice_of_str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0] && compare(str + i, to_find))
			return (str + i);
		i++;
	}
	return (0);
}

int	compare(char *slice_of_str, char *to_find)
{
	int	i;

	i = 0;
	while (slice_of_str[i] != '\0' && to_find[i] != '\0')
	{
		if (slice_of_str[i] != to_find[i])
			return (0);
		i++;
	}
	if (to_find[i] == '\0')
		return (1);
	return (0);
}
