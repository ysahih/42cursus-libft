/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahih <ysahih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:21:47 by ysahih            #+#    #+#             */
/*   Updated: 2022/11/01 03:59:21 by ysahih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		p = (char *)malloc (ft_strlen(s) - start + 1);
	else
		p = (char *)malloc (len + 1);
	if (!p)
		return (0);
	i = 0;
	while (s[i] && i < len)
		p[i++] = s[start++];
	p[i] = '\0';
	return (p);
}
