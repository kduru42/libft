/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:35:12 by kduru             #+#    #+#             */
/*   Updated: 2022/06/25 13:35:13 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if ((dst == src) || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	i = 0;
	while (i != n)
	{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
	}
	return (dst);
}
