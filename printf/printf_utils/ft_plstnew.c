/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 09:46:54 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/14 15:14:05 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

p_list	*ft_plstnew(void *content)
{
	p_list	*new;

	if (!(new = malloc(sizeof(p_list))))
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
