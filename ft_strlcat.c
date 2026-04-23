/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-oli <side-oli@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:19:28 by side-oli          #+#    #+#             */
/*   Updated: 2026/04/23 15:19:37 by side-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (size <= dst_size)
		return (size + src_size);
	while (*dst && size > 0)
	{
		dst++;
		size--;
	}
	while (*src && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	if (size > 0)
		*dst = '\0';
	return (dst_size + src_size);
}
