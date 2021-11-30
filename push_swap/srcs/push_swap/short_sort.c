/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <alpascal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:09:21 by alpascal          #+#    #+#             */
/*   Updated: 2021/11/29 19:38:43 by alpascal         ###   ########.fr       */
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

// void	ft_sorted_case(t_head *head, t_config *config)
// {
// 	int	i;

// 	i = 0;
// 	// ft_rev_rotatea(head, config);
// 	if (config->count == 5)
// 		ft_swapb(head, config);
// 	while(i < config->count - 3)
// 	{
// 		ft_pusha(head, config);
// 		i++;
// 	}
// 	while (i > 0)
// 	{
// 		ft_rotatea(head, config);
// 		i--;
// 	}
// }

int		ft_path_finder(int *tab, int j, int max)
{
	int	i;
	int k;

	i = 0;
	k = 0;
	while (i < max && j > tab[i])
		i++;
	while (k < max && j < tab[max - 1 - k])
		k++;
	printf("%d, %d, %d\n", i, k, max);
	if (k < i)
		return (-k);
	// if (i > (max / 2) + max % 2)
	// 	return (-1 * (max + 1 - i));
	return (i);
}

void	ft_short_sort(t_head *head, t_config *config, int j, int i)
{
	int	*tab;
	int	s;

	j = 0;
	i = 0;
	while (i++ + 3 < config->count)
		ft_pushb(head, config);
	// if (config->count == 5 && head->b->value > head->b->next->value)
	// 	ft_swapb(head, config);
	ft_threesort(head, config);
	i = 0;
	while (config->count - i > 4)
	{
		tab = sorted_tab(head->a, config, 0, 0);
		s = ft_path_finder(tab, head->b->value, 3 + i);
		while (s != 0)
		{
			if (s < 0)
			{
				ft_rev_rotatea(head, config);
				s++;
				j--;
			}
			else
			{
				ft_rotatea(head, config);
				s--;
				j++;
			}
		}
		ft_pusha(head, config);
		i++;
		free(tab);
	}
	if (j < 0)
		while (j++ < config->count)
			ft_rotatea(head, config);
	else
		while (j-- > 0)
			ft_rev_rotatea(head, config);
	// if (tab[2] < head->b->value)
	// 	ft_sorted_case(head, config);
	// else
	// {
	// 	while (i <= 3 && j < config->count - 3)
	// 	{
	// 		if (tab[i] > head->b->value || i == 3)
	// 		{
	// 			ft_pusha(head, config);
	// 			j++;
	// 		}
	// 		else
	// 			i++;
	// 		ft_rotatea(head, config);
	// 	}
	// 	if (i + j <= config->count / 2)
	// 		while (config->count > 3 && i-- + j > 0)
	// 			ft_rev_rotatea(head, config);
	// 	else
	// 		while (config->count > 3 && i++ + j < config->count)
	// 			ft_rotatea(head, config);
	// }
}
