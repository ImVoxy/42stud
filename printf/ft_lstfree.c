/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:37:23 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/08 10:37:25 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstfree(t_list **lst)
{
	t_list	*ind;

	ind = *lst;
	if (ind)
	{
		while (ind->next)
		{
			free(ind->content);
			ind = ind->next;
			free(*lst);
			*lst = ind;
		}
		free(ind->content);
		free(ind);
	}
	*lst = NULL;
}