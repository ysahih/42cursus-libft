/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahih <ysahih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:53:10 by ysahih            #+#    #+#             */
/*   Updated: 2022/10/26 16:07:11 by ysahih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += 1;
		n = -n;
	}
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		count;
	int		i;

	if (!n)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = ft_count(n);
	p = malloc (count + 1);
	if (!p)
		return (0);
	i = 0;
	if (n < 0)
	{
		p[i++] = '-';
		n = -n;
	}
	p[count] = '\0';
	while (--count >= i)
	{
		p[count] = (n % 10) + 48;
		n /= 10;
	}
	return (p);
}
