/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:36:32 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/13 15:35:50 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_plstadd_back(p_list **alst, p_list *new)
{
	p_list *test;

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
