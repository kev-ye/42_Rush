/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:04:48 by kaye              #+#    #+#             */
/*   Updated: 2022/01/09 19:16:25 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

static void	*ft_memcpy(void *dst, const void *src, unsigned long n)
{
	unsigned long	i;

	if (!dst && !src)
		return ((void *)NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		++i;
	}
	return (dst);
}


char	*ft_strdup(const char *s1)
{
	char			*str;
	unsigned long	len;

	len = ft_strlen(s1) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	return ((char *)ft_memcpy(str, s1, len));
}
