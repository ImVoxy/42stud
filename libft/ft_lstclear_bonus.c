/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 09:27:41 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/19 14:14:01 by alpascal         ###   ########.fr       */
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
