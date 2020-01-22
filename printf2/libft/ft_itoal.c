/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoal.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:33:51 by alpascal          #+#    #+#             */
/*   Updated: 2020/01/22 12:07:46 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../ft_printf.h"

void			letri(char *a, long int i)
{
	int		j;
	int		k;
	char	c;

	j = 0;
	if (a[0] == '-')
		j++;
	k = ((i + 1) + j) / 2;
	while (i >= k)
	{
		c = a[i];
		a[i--] = a[j];
		a[j++] = c;
	}
}

int				ft_abs(int n)
{
	long int r;

	r = n;
	if (r < 0)
		r *= -1;
	return (r);
}

char			*ft_itoal(long int n, t_list list)
{
	int		i;
	int		size;
	char	*a;

	size = ft_get_len_d(n, list, 10);
	i = 0;
	if (n < 0)
		i = 1;
	if (!(a = ft_callocs(size + 1, sizeof(char))))
		return (NULL);
	if (i == 1)
		a[0] = '-';
	while (n >= 10 || n <= -10)
	{
		a[i] = ft_abs(n % 10) + 48;
		i++;
		n /= 10;
	}
	a[i++] = ft_abs(n % 10) + 48;
	list.flag == '0' ? list.pre = size : 1;
	while (((a[0] == '-') ? i - 1 : i) < list.pre)
			a[i++] = '0';
	letri(a, i - 1);
	return (a);
}
