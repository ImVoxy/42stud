/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 09:27:41 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/06 14:38:43 by alpascal         ###   ########.fr       */
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
