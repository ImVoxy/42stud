/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:36:32 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/08 10:36:35 by alpascal         ###   ########.fr       */
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
