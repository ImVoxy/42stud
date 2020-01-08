/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:36:59 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/08 10:37:01 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ind;

	ind = *lst;
	if (ind && del)
	{
		while (ind->next)
		{
			del((void *)ind->content);
			ind = ind->next;
			free(*lst);
			*lst = ind;
		}
		del((void*)(ind->content));
		free(ind);
	}
	*lst = NULL;
}
