/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:36:06 by kduru             #+#    #+#             */
/*   Updated: 2022/06/25 17:36:08 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, const char	*set)
{
	size_t	start;
	size_t	len;

	if (!s1)
		return (0);
	if (!set)
		return ((char *)s1);
	start = 0;
	len = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start == ft_strlen(s1))
		return (ft_strdup(""));
	while (s1[len] && ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, start, ++len - start));
}
