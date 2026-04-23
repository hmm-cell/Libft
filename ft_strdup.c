/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-oli <side-oli@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:05:37 by side-oli          #+#    #+#             */
/*   Updated: 2026/04/23 15:05:46 by side-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_s;
	char	*ptr;

	new_s = (char *)malloc(ft_strlen(s) + 1);
	if (!new_s)
		return (NULL);
	ptr = new_s;
	while (*s)
		*ptr++ = *s++;
	*ptr = '\0';
	return (new_s);
}
