/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahih <ysahih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:57:47 by ysahih            #+#    #+#             */
/*   Updated: 2022/11/05 18:30:01 by ysahih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_exists(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*result(const char *s, int a, int i)
{
	int		k;
	char	*p;

	p = malloc (a - i + 2);
	if (!p)
		return (0);
	k = 0;
	while (i <= a)
		p[k++] = s[i++];
	p[k] = '\0';
	return (p);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		a;
	int		i;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (s1[i] && (ft_exists(set, s1[i])))
			i++;
	a = ft_strlen(s1);
	if (i == a)
		return (ft_strdup(""));
	a--;
	while (a > 0 && ft_exists(set, s1[a]))
			a--;
	if (a == 0)
		return (ft_strdup(""));
	p = result(s1, a, i);
	return ((char *)p);
}
