/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahih <ysahih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:05:59 by ysahih            #+#    #+#             */
/*   Updated: 2022/11/05 23:18:07 by ysahih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include "libft.h"

static int	ft_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{	
		if (s[i] != c)
		{
			count++;
			i++;
		}
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
	}
	return (count);
}

static char	**ft_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (NULL);
}

static char	*ft_fill(char const *s, int len)
{
	char	*p;

	p = (char *)malloc (len + 1);
	if (!p)
		return (0);
	ft_memcpy(p, s, len);
	p[len] = 0;
	return (p);
}

static char	**filling_tab(char **tab, const char *s, char c)
{
	int	len;
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (len != 0)
		{
			tab[i] = ft_fill(s, len);
			if (!tab[i])
				return (ft_free(tab));
			i++;
		}
		s += len;
	}
	tab[i] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		len;
	int		i;

	if (!s)
		return (0);
	len = ft_count(s, c);
	tab = malloc(len * sizeof(char *) + 1);
	if (!tab)
		return (0);
	i = 0;
	return (filling_tab(tab, s, c));
}
