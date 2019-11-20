/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 09:11:18 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/18 11:26:36 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *test;

	if (alst && (*alst) && new)
	{
		test = *alst;
		while (test->next)
			test = test->next;
		test->next = new;
	}
	if (*alst == NULL && new)
		(*alst) = new;
}
