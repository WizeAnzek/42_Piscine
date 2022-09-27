/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugolini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:40:40 by gugolini          #+#    #+#             */
/*   Updated: 2022/09/27 09:19:45 by gugolini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	flag;
	int	count;

	i = 0;
	flag = 1;
	count = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset))
		{
			flag = 1;
			i++;
		}
		else
		{
			if (flag)
			{
				flag = 0;
				count++;
			}
			i++;
		}
	}
	return (count);
}

int	make_put_update(char **array, char *slice, char *charset, int n_p)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (slice[i])
	{
		if (is_sep(slice[i], charset))
			break ;
		i++;
	}
	str = malloc(i);
	while (j < i)
	{
		str[j] = slice[j];
		j++;
	}
	str[j] = '\0';
	array[n_p] = str;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	int		num_parole;
	int		i;
	char	**array;
	int		n_p;

	num_parole = count_words(str, charset);
	array = malloc(8 * (num_parole + 1));
	i = 0;
	n_p = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset))
			i++;
		else
		{
			i += make_put_update(array, &str[i], charset, n_p);
			n_p++;
		}
	}
	array[n_p] = 0;
	return (array);
}
