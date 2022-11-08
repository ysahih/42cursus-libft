/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahih <ysahih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:41:37 by ysahih            #+#    #+#             */
/*   Updated: 2022/10/27 00:06:03 by ysahih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (!size || size <= dlen)
		return (slen + size);
	while (src[i] && i < size - dlen - 1)
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dlen + slen);
}
