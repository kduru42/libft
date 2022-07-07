/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:43:46 by kduru             #+#    #+#             */
/*   Updated: 2022/06/29 16:39:07 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*dongu(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	lens1;
	size_t	lens2;
	char	*news;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	i = 0;
	news = (char *)malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!news)
		return (NULL);
	while (i < lens1)
	{
		news[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < lens1 + lens2)
		news[i++] = s2[j++];
	news[i] = 0;
	return (news);
}	

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*news;

	if (!s1 || !s2)
		return (NULL);
	news = dongu(s1, s2);
	return (news);
}
