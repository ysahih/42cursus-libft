/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahih <ysahih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 02:19:12 by ysahih            #+#    #+#             */
/*   Updated: 2022/11/03 22:58:35 by ysahih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	void	*p;
	size_t	i;

	i = 0;
	p = b;
	while (i < len)
	{
		*(unsigned char *)p++ = (unsigned char) c;
		i++;
	}
	return ((void *)b);
}	
