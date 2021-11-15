/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <alpascal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:09:21 by alpascal          #+#    #+#             */
/*   Updated: 2021/11/15 13:57:32 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	last_val(t_head *head)
{
	t_stack	*tmp;

	tmp = head->a;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp->value);
}

void	ft_threesort(t_head *head, t_config *config)
{
	if (head->a->value > head->a->next->value)
		ft_swapa(head, config);
	if (head->a->value > head->a->next->next->value)
		ft_rev_rotatea(head, config);
	if (head->a->next->value > head->a->next->next->value)
	{
		ft_rev_rotatea(head, config);
		ft_swapa(head, config);
	}
}

void	ft_short_sort(t_head *head, t_config *config, int j, int i)
{
	int	*tab;

	j = 0;
	i = 0;
	while (i++ + 3 < config->count)
		ft_pushb(head, config);
	if (config->count == 5 && head->b->value > head->b->next->value)
		ft_swapb(head, config);
	ft_threesort(head, config);
	tab = sorted_tab(head->a, config, 0, 0);
	i = 0;
	while (i <= 3 && j < config->count - 3)
	{
		if (tab[i] > head->b->value || i == 3)
		{
			ft_pusha(head, config);
			j++;
		}
		else
			i++;
		ft_rotatea(head, config);
	}
	while (config->count > 3 && i++ + j < config->count)
		ft_rotatea(head, config);
	free(tab);
}
