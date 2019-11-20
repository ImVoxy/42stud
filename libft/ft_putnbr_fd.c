/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:58:25 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/11 13:37:04 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

void		ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	a[12];

	i = 0;
	while (i < 12)
	{
		a[i] = 0;
		i++;
	}
	i = 0;
	if (n < 0)
		write(fd, "-", 1);
	while (n / 10)
	{
		a[i] = ft_abs(n % 10) + '0';
		n /= 10;
		i++;
	}
	a[i] = ft_abs(n % 10) + '0';
	while (i >= 0)
	{
		write(fd, &a[i], 1);
		i--;
	}
}
