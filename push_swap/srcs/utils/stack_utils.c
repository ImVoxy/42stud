/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <alpascal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:11:00 by alpascal          #+#    #+#             */
/*   Updated: 2021/11/08 16:59:44 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	init_stack(int len, int *val, t_head **head)
{
	t_stack	*tmp;
	int		i;

	tmp = ft_calloc(1, sizeof(t_stack));
	(*head)->b = NULL;
	(*head)->a = tmp;
	i = 0;
	tmp->value = val[i];
	tmp->next = NULL;
	i++;
	while (i < len)
	{
		tmp->next = ft_calloc(1, sizeof(t_stack));
		tmp = tmp->next;
		tmp->value = val[i];
		tmp->next = NULL;
		i++;
	}
}

void	ft_cleanup(t_head *head, t_config *config, int *tab)
{
	t_stack	*tmp;

	if (tab)
		free(tab);
	while (head->a)
	{
		tmp = head->a;
		head->a = head->a->next;
		free(tmp);
	}
	while (head->b)
	{
		tmp = head->b;
		head->b = head->b->next;
		free(tmp);
	}
	free(head);
	free(config);
	head = NULL;
}

void	parse_stack(t_stack *a, t_config *config)
{
	t_stack	*tmp;

	config->min = a->value;
	config->max = a->value;
	config->count = 0;
	config->op = 0;
	tmp = a;
	while (tmp)
	{
		if (tmp->value > config->max)
			config->max = tmp->value;
		if (tmp->value < config->min)
			config->min = tmp->value;
		config->count++;
		tmp = tmp->next;
	}
}

int	*exit_checker(int *tab, int i)
{
	if (tab && i == 1)
		return (tab);
	else if (tab)
	{
		free (tab);
		tab = NULL;
	}
	return (tab);
}
