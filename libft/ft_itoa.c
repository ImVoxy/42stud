/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 14:49:52 by alpascal          #+#    #+#             */
/*   Updated: 2019/11/20 12:23:55 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		letri(char *a, int i)
{
	int		j;
	int		k;
	char	c;

	j = 0;
	if (a[0] == '-')
		j = 1;
	k = i / 2;
	while (i > k)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
		i--;
		j++;
	}
}

static int		ft_abs(int n)
{
	long int r;

	r = n;
	if (r < 0)
		r *= -1;
	return (r);
}

static long int	ft_pow(int i)
{
	long int val;

	val = 1;
	while (i)
	{
		val *= 10;
		i--;
	}
	return (val);
}

char			*ft_itoa(int n)
{
	int		i;
	int		size;
	char	*a;

	size = 1;
	i = 0;
	while (n / ft_pow(size))
		size++;
	if (n < 0)
		i = 1;
	if (!(a = (char *)ft_calloc(size + 1 + i, sizeof(char))))
		return (NULL);
	if (i == 1)
		a[0] = '-';
	while (n >= 10 || n <= -10)
	{
		a[i] = ft_abs(n % 10) + 48;
		i++;
		n /= 10;
	}
	a[i] = ft_abs(n % 10) + 48;
	letri(a, i);
	return (a);
}
