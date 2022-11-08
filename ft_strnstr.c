/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahih <ysahih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:08:26 by ysahih            #+#    #+#             */
/*   Updated: 2022/11/03 20:43:34 by ysahih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

char	*ft_strnstr(const char *src, const char *to_find, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (to_find[0] == '\0')
		return ((char *) src);
	while (src[a] && a < len)
	{
		while (src[a + b] == to_find[b] && src[a + b] != '\0' && a + b < len)
			b++;
		if (to_find[b] == '\0')
			return ((char *)src + a);
		a++;
		b = 0;
	}
	return (0);
}
