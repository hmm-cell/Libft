/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-oli <side-oli@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:23:01 by side-oli          #+#    #+#             */
/*   Updated: 2026/04/23 15:23:02 by side-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*n_s;
	unsigned int	len;

	len = ft_strlen(s);
	i = 0;
	n_s = malloc(sizeof(char) * (len + 1));
	if (!n_s)
		return (NULL);
	while (i < len)
	{
		n_s[i] = (*f)(i, s[i]);
		i++;
	}
	n_s[i] = '\0';
	return (n_s);
}
