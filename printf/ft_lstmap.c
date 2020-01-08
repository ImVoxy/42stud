/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:37:59 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/08 10:38:02 by alpascal         ###   ########.fr       */
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
