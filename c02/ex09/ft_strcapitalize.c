/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugolini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:37:20 by gugolini          #+#    #+#             */
/*   Updated: 2022/09/14 10:14:48 by gugolini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanum(char c);
int	is_not_alphanum(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (is_alphanum(str[i]) && is_not_alphanum(str[i - 1]))
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}
		else if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

int	is_alphanum(char c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int	is_not_alphanum(char c)
{
	if (is_alphanum(c))
		return (0);
	return (1);
}
