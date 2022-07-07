/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:41:24 by kduru             #+#    #+#             */
/*   Updated: 2022/06/25 15:41:25 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	subs = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!subs)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (i < len)
		{
			subs[i] = s[start];
			i++;
			start++;
		}
	}
	subs[i] = 0;
	return (subs);
}
