/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-oli <side-oli@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:46:37 by side-oli          #+#    #+#             */
/*   Updated: 2026/04/23 14:46:39 by side-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

static int	sub_strs_handler(const char *str, char c, char **res)
{
	int	str_ctr;
	int	size;

	str_ctr = 0;
	size = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
		{
			str_ctr++;
			size = 0;
			while (*str && *str != c)
			{
				str++;
				size++;
			}
			if (res)
				return (size);
		}
	}
	return (str_ctr);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	res = malloc(sizeof(char *) * (sub_strs_handler(s, c, NULL) + 1));
	if (!res)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			res[j] = ft_substr(s, i, sub_strs_handler(&s[i], c, res));
			if (!res[j++])
				return (ft_free(res, j));
			i += sub_strs_handler(&s[i], c, res);
		}
		else
			i++;
	}
	res[j] = NULL;
	return (res);
}
