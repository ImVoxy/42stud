/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 09:45:58 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/19 12:48:45 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*start;

	(void)(*del);
	if (!f || !lst)
		return (NULL);
	new = ft_lstnew((*f)(lst->content));
	start = new;
	while (lst->next)
	{
		lst = lst->next;
		new->next = ft_lstnew((*f)(lst->content));
		new = new->next;
	}
	return (start);
}
