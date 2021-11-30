/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <alpascal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:08:06 by alpascal          #+#    #+#             */
/*   Updated: 2021/11/19 17:11:19 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	test_write(t_head *head)
{
	t_stack	*tmp;

	tmp = head->a;
	write (1, "-> test stack a\n", 16);
	while (tmp)
	{
		ft_putnbr_fd(tmp->value, 1);
		tmp = tmp->next;
	}
	write (1, "\n\n", 2);
	write (1, "-> test stack b\n", 16);
	tmp = head->b;
	while (tmp)
	{
		ft_putnbr_fd(tmp->value, 1);
		tmp = tmp->next;
	}
	write (1, "\n\n", 2);
}

void	loop_checker2(t_head *head, t_config *config, char *cmd)
{
	if (!ft_strncmp(cmd, "pb", 2))
		ft_pushb(head, config);
	else if (!ft_strncmp(cmd, "rra", 3))
		ft_rev_rotatea(head, config);
	else if (!ft_strncmp(cmd, "rrb", 3))
		ft_rev_rotateb(head, config);
	else if (!ft_strncmp(cmd, "rrr", 3))
		ft_rev_rotater(head, config);
	else if (!ft_strncmp(cmd, "ra", 2))
		ft_rotatea(head, config);
	else if (!ft_strncmp(cmd, "rb", 2))
		ft_rotateb(head, config);
	else if (!ft_strncmp(cmd, "rr", 2))
		ft_rotater(head, config);
}

int	loop_checker(t_head *head, t_config *config)
{
	char	*cmd;

	cmd = NULL;
	while (get_next_line(0, &cmd))
	{
		if (!ft_strncmp(cmd, "sa", 2))
			ft_swapa(head, config);
		else if (!ft_strncmp(cmd, "sb", 2))
			ft_swapb(head, config);
		else if (!ft_strncmp(cmd, "ss", 2))
			ft_swaps(head, config);
		else if (!ft_strncmp(cmd, "pa", 2))
			ft_pusha(head, config);
		else if (!ft_strncmp(cmd, "stop", 4))
		{
			free(cmd);
			break ;
		}
		else
			loop_checker2(head, config, cmd);
		free(cmd);
	}
	return (0);
}

void	check_result(t_head *head)
{
	t_head	*tmp;

	tmp = head;
	if (tmp->b)
		write (1, "KO\n", 3);
	else
	{
		while (tmp->a->next)
		{
			if (tmp->a->value > tmp->a->next->value)
			{
				write (1, "KO\n", 3);
				return ;
			}
			tmp->a = tmp->a->next;
		}
		write (1, "OK\n", 3);
	}
}

int	main(int argc, char **argv)
{
	t_head		*head;
	t_config	*config;
	int			*tab;

	(void)argc;
	tab = check_args(&(argv[1]));
	if (tab && count_args(&(argv[1]), 0))
	{
		head = ft_calloc(1, sizeof(t_head));
		config = ft_calloc(1, sizeof(t_config));
		init_stack(count_args(&(argv[1]), 0), tab, &head);
		parse_stack(head->a, config);
		loop_checker(head, config);
		check_result(head);
		ft_cleanup(head, config, tab);
	}
	else
		write(2, "Error\n", 6);
	return (0);
}
