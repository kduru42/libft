/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 03:14:55 by kduru             #+#    #+#             */
/*   Updated: 2022/07/04 03:14:56 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*iter;

	if (!del)
		return ;
	if (lst)
	{
		while ((*lst) != NULL)
		{
			iter = *lst;
			*lst = (*lst)->next;
			(*del)((iter)->content);
			free((iter));
		}
		(*lst) = NULL;
	}
}
