/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahih <ysahih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:22:52 by ysahih            #+#    #+#             */
/*   Updated: 2022/11/06 22:20:11 by ysahih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	i = 0;
	if (dst == src)
		return ((void *)src);
	if (dst > src)
	{
		len--;
		while ((int)len >= 0)
		{
			((char *)dst)[len] = ((char *)src)[len];
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return ((void *)dst);
}
