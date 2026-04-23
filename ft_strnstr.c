/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-oli <side-oli@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:26:50 by side-oli          #+#    #+#             */
/*   Updated: 2026/04/23 15:26:51 by side-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_find;

	if (*little == '\0')
		return ((char *)big);
	len_find = ft_strlen(little);
	while (*big != '\0' && len >= len_find)
	{
		if (*big == *little)
		{
			if (ft_strncmp(big, little, len_find) == 0)
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (0);
}
